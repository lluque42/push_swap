/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:23:34 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 21:32:05 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_lang.h
 * TODO
 * Doubly linked circular list implementation. Part of libft library.  
 * A dlclst has a head which points to the node that is to be interpreted as the
 * begining of the list or its first element. In the same way, the list alsohas
 * a last element which will be the node pointed to by the 'prev' field of the
 * head node.  
 * In a dlclst list with just one element, that element will point to itself.
 * That is, the only node will be the first and the last at the same time.  
 * In this sense, due to the circular nature of the dlclst list, NO check is
 * performed against the size of the list while operating on their elements and
 * traversing the list. A value for position or steps from one node to another
 * that could cause an overflow of the head of the list is allowed and will be
 * interpreted consistently with the circular nature of the list.
*/

#ifndef PS_LANG_H
# define PS_LANG_H

# include "libft.h"

/**
 * @struct s_ps_stacks
 * @brief Base for typedef <b>t_ps_stacks</b> for the main data structure for
 * push_swap project.
 * @details This type is used as the main data structure for push_swap project.
 * It contains both stack a and b implemented with doubly linked circular list
 * implementation from libft.
 * @var s_ps_stacks::a
 * Stack a to be initialized and sorted.
 * @var s_ps_stacks::b
 * Stack b to be used while sorting stack a elements.
*/
typedef struct s_ps_stacks
{
	t_dlclst	*a;
	t_dlclst	*b;
}	t_ps_stacks;

/**
 * @brief <b>sa</b> -- Swap a.
 *
 * @details Swap the first 2 elements at the top of stack a.  
 * Do nothing if there is only one or no elements.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		sa(t_ps_stacks *ps);

/**
 * @brief <b>sb</b> -- Swap b.
 *
 * @details Swap the first 2 elements at the top of stack b.  
 * Do nothing if there is only one or no elements.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		sb(t_ps_stacks *ps);

/**
 * @brief <b>ss</b> -- Swap a and b at the same time.
 *
 * @details Performs sa() and sb() at the same time.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		ss(t_ps_stacks *ps);

/**
 * @brief <b>pa</b> -- Pop b then push it to a.
 *
 * @details Take the first element at the top of b and put it at the top of a.  
 * Do nothing if b is empty
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		pa(t_ps_stacks *ps);

/**
 * @brief <b>pb</b> -- Pop a then push it to b.
 *
 * @details Take the first element at the top of a and put it at the top of b.  
 * Do nothing if b is empty
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		pb(t_ps_stacks *ps);

/**
 * @brief <b>ra</b> -- Rotate a.
 *
 * @details Shift up all elements of stack a by 1.  
 * The first element becomes the last one.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		ra(t_ps_stacks *ps);

/**
 * @brief <b>rb</b> -- Rotate b.
 *
 * @details Shift up all elements of stack b by 1.  
 * The first element becomes the last one.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		rb(t_ps_stacks *ps);

/**
 * @brief <b>rr</b> -- Rotate a and b at the same time.
 *
 * @details Performs ra() and rb() at the same time.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		rr(t_ps_stacks *ps);

/**
 * @brief <b>rra</b> -- Reverse rotate a.
 *
 * @details Shift down all elements of stack a by 1.  
 * The last element becomes the first one.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		rra(t_ps_stacks *ps);

/**
 * @brief <b>rrb</b> -- Reverse rotate b.
 *
 * @details Shift down all elements of stack b by 1.  
 * The last element becomes the first one.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		rrb(t_ps_stacks *ps);

/**
 * @brief <b>rrr</b> -- Reverse rotate a and b at the same time.
 *
 * @details Performs rra() and rrb() at the same time.
 *
 * @param [in, out] ps - The pointer to the push swap stacks struct.
 *
 * @warning EXTERNAL FUNCTION USED: TODO malloc().
 *
 * @remark Implementation notes:
 * TODO Argument content is NOT checked for NULL, a node with NULL content is
 * returned.
 * If malloc fails, must return NULL.
*/
void		rrr(t_ps_stacks *ps);

/**
 * @brief <b>init_ps</b> -- Allocates memory for a t_ps_stacks structure.
 *
 * @details Allocates memory for both dlclst stacks a and b and their 
 * t_ps_stacks structure container.
 *
 * @return - The initialized t_ps_stacks.
*/
t_ps_stacks	*init_ps(void);

/**
 * @brief <b>free_ps</b> -- Frees t_ps_stacks structure.
 *
 * @details Frees both dlclst stacks and then de t_ps_stacks structure.
 *
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
*/
void		free_ps(t_ps_stacks **ps);

/**
 * @brief <b>already_in_a</b> -- Checks if an integer is already in stack a.
 *
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
 *
 * @param [in] element - The integer to look for in stack a.
 *
 * @return - A non-zero value if the element was found in stack a.  
 * A 0 value otherwise.
*/
int			already_in_a(t_ps_stacks *ps, int element);

/**
 * @brief <b>bottom_pusha</b> -- Pushes an integer to the bottom of stack a.
 *
 * @details Pushes an integer to the bottom of stack a. This function is used
 * to initialize the content from the command-line arguments according to this
 * requirement: "The first argument should be at the top of the stack (be
 * careful about the order)".
 *
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
 *
 * @param [in] element - The integer to push to the bottom of stack a.
 *
 * @return - A non-zero value if succesful.  
 * A 0 value if memory allocation fails.
*/
int			bottom_pusha(t_ps_stacks *ps, int element);

/**
 * @brief <b>printa</b> -- Prints the content of stack a.
 *
 * @details Prints the content of stack a. The uppermost element is the top of
 * the stack.
 *
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
*/
void		printa(t_ps_stacks *ps);

/**
 * @brief <b>printb</b> -- Prints the content of stack b.
 *
 * @details Prints the content of stack b. The uppermost element is the top of
 * the stack.
 *
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
*/
void		printb(t_ps_stacks *ps);

#endif
