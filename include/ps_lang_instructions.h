/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_instructions.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:23:34 by lluque            #+#    #+#             */
/*   Updated: 2024/02/09 13:58:31 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_lang_instructions.h
 * Instruction set for the "push swap language".
*/

#ifndef PS_LANG_INSTRUCTIONS_H
# define PS_LANG_INSTRUCTIONS_H

# include "ps_lang_types.h"

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

#endif
