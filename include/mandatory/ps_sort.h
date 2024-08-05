/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:46:54 by lluque            #+#    #+#             */
/*   Updated: 2024/07/31 23:57:40 by lluque           ###   ########.fr       */
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

int		sorting_preparations(t_ps_stacks *ps);
void	sort_stack_a_last_three(t_ps_stacks *ps);
void	sort_stack_a_two(t_ps_stacks *ps);
void	costs_based_pushing(t_ps_stacks *ps);
void	set_costs_values(t_ps_stacks *ps);
int		get_lowest_cost_element_pos(t_ps_stacks *ps);
void	rotate_before_pa(t_ps_stacks *ps, int lowest_cost_element_pos);
void	rotate_until_sorted(t_ps_stacks *ps);
int		get_target_pos(t_ps_stacks *ps, t_dlclst *current_node);
#endif
/**
 * @brief <b>list_to_array</b> -- Returns in int array[] form, the values of
 * every element in stack A.
 *
 * @param [in] ps - The t_ps_stacks with both A and B stacks
 *
 * @param [in,out] array - The resulting array, caller is responsible to freeing
 * its memory.
 *
 * @return If successful, the array of integers length.
 * A value of -1 if error.
*/
//int		list_to_array(t_ps_stacks *ps, int **array);

/**
 * @brief <b>classic_sorting</b> -- Sorts an integer array.
 *
 * @details For now, a simple bubble sort algorithm implementation.
 *
 * @param [in,out] array - The integers array to sort.
 *
 * @param [in,out] array_len - The number of elements in the array.
 *
*/
//void	classic_sorting(int *array, int array_len);

/**
 * @brief <b>set_pos_when_sorted</b> -- Sets member pos_when_sorted in every
 * element in stack A.
 *
 * @details Given an integer array which is the sorted version of the values of
 * the elements in stack A, this function sets the pos_when_sorted member of 
 * every element in stack A.
 *
 * @param [in,out] ps - The t_ps_stacks holding both A and B stacks.
 *
 * @param [in] array - The integer array already sorted.
 *
 * @param [in] array_len - The number of elements in the array, which matches
 * the number of elements in the stack A.
*/
//void	set_pos_when_sorted(t_ps_stacks *ps, int *array, int array_len);
