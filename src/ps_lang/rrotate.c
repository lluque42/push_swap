/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:49 by lluque            #+#    #+#             */
/*   Updated: 2024/02/04 22:53:10 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_lang.h"

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
void	rra(t_ps_stacks *ps);

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
void	rrb(t_ps_stacks *ps);

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
void	rrr(t_ps_stacks *ps);

