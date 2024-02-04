/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:44:16 by lluque            #+#    #+#             */
/*   Updated: 2024/02/04 22:52:43 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_lang.h"

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
void	pa(t_ps_stacks *ps);

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
void	pb(t_ps_stacks *ps);

