/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:45:35 by lluque            #+#    #+#             */
/*   Updated: 2024/02/04 22:52:51 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_lang.h"
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
void	sa(t_ps_stacks *ps);

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
void	sb(t_ps_stacks *ps);

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
void	ss(t_ps_stacks *ps);
