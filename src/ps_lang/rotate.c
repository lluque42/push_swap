/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:14 by lluque            #+#    #+#             */
/*   Updated: 2024/02/04 22:53:01 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_lang.h"

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
void	ra(t_ps_stacks *ps);

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
void	rb(t_ps_stacks *ps);

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
void	rr(t_ps_stacks *ps);

