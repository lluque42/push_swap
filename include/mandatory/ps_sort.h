/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:46:54 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:21:20 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_sort.h
 * TODO
 * Set of function to be used with dlclst (Doubly linked circular list libft's
 * implementation) when list content is of integer type.
*/

#ifndef PS_SORT_H
# define PS_SORT_H

# include "push_swap.h"

/**
 * @struct s_ps_rotations
 * 
 * @brief Base for typedef <b>s_ps_rotations</b> to storage the number of
 * each rotation instruction type to be performed on the stacks.
 * 
 * @details This type is used to storage the number of each rotation instruction
 * type to be performed on either the stack B or stack A. This values are set,
 * in respect to the lowest-cost element in B so that rotate_before_pa()
 * execute the right instructions before the actual pushing to A of said
 * element.
 *
 * @var s_ps_rotations::cost_a
 * A copy of the value of member cost_a of the lowest-cost element
 * @var s_ps_rotations::cost_b
 * A copy of the value of member cost_b of the lowest-cost element
 * @var s_ps_rotations::rrs
 * Number of rr instructions to perform.
 * @var s_ps_rotations::rrrs
 * Number of rrr instructions to perform.
 * @var s_ps_rotations::ras
 * Number of ra instructions to perform.
 * @var s_ps_rotations::rras
 * Number of rra instructions to perform.
 * @var s_ps_rotations::rbs
 * Number of rb instructions to perform.
 * @var s_ps_rotations::rrbs
 * Number of rrb instructions to perform.
*/
typedef struct s_ps_rotations
{
	int	cost_a;
	int	cost_b;
	int	rrs;
	int	rrrs;
	int	ras;
	int	rras;
	int	rbs;
	int	rrbs;
}	t_ps_rotations;
/**
 * @typedef t_ps_rotations
 * Based on the @link s_ps_rotations @endlink struct.
 */

/**
 * @brief <b>ps_sort</b> -- The entry point for the sorting algorithm.
 *
 * @details TODO.
 *
 * @param [in,out] ps - TODO.
 *
 * @return Non-zero value if OK, zero if error.
 *
 * @remark Implementation notes:
 * TODO.
*/
int		ps_sort(t_ps_stacks *ps);

/**
 * @brief <b>pre_sort</b> -- Smartly pushes to stack B every element of stack A
 * but three which are left already sorted. 
 *
 * @details 
 *
 * Smartly pushes to stack B every element of stack A but three. It does so in a
 * block-by-block basis. The size of the block is half the number of elements
 * that remain to be pushed + 1. The criteria for an element to be pushed is
 * dependant on the current average of the pos_when_sorted which updates in a
 * block-by-block basis (as also the block size). Auxiliary function
 * loop_block() tries with top A, second-to-top A, and bottom A elements and
 * pushes to B the first one with a pos_when_sorted smaller than the block's
 * avg_pos_when_sorted.  
 * The pre-sorting stage ends with sorting the three elements left in stack A.
 * This three sorted elements will be the reference to push back everything to
 * stack A using movement costs analysis.
 * It does so in a block by block basis. The size of the block is
 * determined by its auxiliary function pb_block() that also does the actual
 * pushing to B.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
*/
void	pre_sort(t_ps_stacks *ps);

/**
 * @brief <b>set_pos_in_stack</b> -- Sets member pos_in_stack in every element
 * in stack A an stack B.
 *
 * @details Sets member pos_in_stack in every element in stack A an stack B.
 * The pos_in_stack is the current position of each element in the stack it
 * is in.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
*/
void	set_pos_in_stack(t_ps_stacks *ps);

/**
 * @brief <b>costs_based_pushing</b> -- Stack B gets emptied by smartly
 * pushing to stack A all of its elements.
 *
 * @details In a loop until stack B is empty, the following tasks are
 * performed:
 * 1. Recalculate every element current position in its own stack
 * (set_pos_in_stack()).
 * 2. Recalculate for every element in stack B its cost values
 * (set_costs_values()).
 * 3. Find out the position of the element in stack B with the lowest cost
 * (get_lowest_cost_element_pos()). Let's call this element the
 * target element.
 * 4. Make the proper rotations in both stacks so that: The target element
 * gets in the top of stack B; and the top of stack A represents the
 * desired position to which, when pushing the target element in B to A,
 * the element lands in the much wanted (circularly) sorted position 
 * (rotate_before_pa()).
 * 5. Finally, with all the stars and planets aligned, make the actual
 * pushing to stack A (pa()).
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
 * 
 */
void	costs_based_pushing(t_ps_stacks *ps);

/**
 * @brief <b>get_target_pos_in_a_for_top_b</b> -- TODO
 *
 * @details TODO.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
 *
 * @param [in] current_node - TODO.
*/
int		get_target_pos_in_a_for_top_b(t_ps_stacks *ps, t_dlclst *current_node);

/**
 * @brief <b>sorting_preparations</b> -- Determines resulting position of each
 * element when sorted.
 *
 * @details Once every number passed is placed in the stack A, this stack is
 * copied to an array of integer to be sorted by some classical sorting
 * algorithm bubble sorting in this case, this could be improved in the future).
 * The purpose of this step is to attach (as a meta-data) to every element in
 * stack A the position it will have once sorted. This pos_when_sorted is the
 * key to the next stage of the sorting process (pre sorting).
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
 *
 * @return A non-zero value if OK, zero otherwise.
*/
int		sorting_preparations(t_ps_stacks *ps);

/**
 * @brief <b>sort_stack_a_last_three</b> -- Sorts stack A when it only has
 * three elements.
 *
 * @details Sorts stack A when it only has three elements.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
*/
void	sort_stack_a_last_three(t_ps_stacks *ps);

/**
 * @brief <b>sort_stack_a_last_two</b> -- Sorts stack A when it only has
 * two elements.
 *
 * @details Sorts stack A when it only has two elements.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
*/
void	sort_stack_a_two(t_ps_stacks *ps);

/**
 * @brief <b>set_costs_values</b> -- Set costs values for every element in
 * stack B.
 *
 * @details Set costs values for every element in stack B.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
*/
void	set_costs_values(t_ps_stacks *ps);

/**
 * @brief <b>get_lowest_cost_element_pos</b> -- Gets the position in stack B of
 * the element with the lowest movement cost.
 *
 * @details Gets the position in stack B of the element with the lowest
 * movement cost (total cost).
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
 *
 * @return The position in stack B of the element with the lowest movement cost.
*/
int		get_lowest_cost_element_pos(t_ps_stacks *ps);

/**
 * @brief <b>rotate_before_pa</b> -- Applies the needed rotations in both
 * stacks, according to cost analysis, to be able to push to stack A the element
 * with the lowest total cost.
 *
 * @details Applies the needed rotations in both stacks, according to cost
 * analysis, to be able to push to stack A the element with the lowest total
 * cost.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
 *
 * @param [in] lowest_cost_element_pos - The position of the element in stack B
 * with the lowest cost.
*/
void	rotate_before_pa(t_ps_stacks *ps, int lowest_cost_element_pos);

/**
 * @brief <b>rotate_until_sorted</b> -- Rotates in the best direction the
 * elements in stack A until it is sorted.
 *
 * @details This function is called once stack B is empty and stack A is
 * circularly sorted after the cost-based pushing. Rotates in the best direction
 * the elements in stack A until it is sorted.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
*/
void	rotate_until_sorted(t_ps_stacks *ps);

#endif
