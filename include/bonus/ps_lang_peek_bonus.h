/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_peek_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:23:34 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 12:22:19 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_lang_peek_bonus.h
 *
 * Peeking functions for retrieving values from the top and bottom of the
 * stacks. These functions return pointers to integer to allow for signaling
 * the emtpyness or lack of required elements.
*/

#ifndef PS_LANG_PEEK_BONUS_H
# define PS_LANG_PEEK_BONUS_H

# include "checker_bonus.h"

/**
 * @brief <b>bot</b> -- Peeks value at the bottom of stack.
 * @details Returns pointer to int value of bottom element in stack.
 * @param [in] stack - The identier of the stack inside ps structure.
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
 * @return If stack is not empty returns a pointer to int value of bottom
 * element.
 * Returns NULL if stack is empty.
 * @warning TODO coletilla de NO NULL check.
 */
int	*bot(t_stack_name stack, t_ps_stacks *ps);

/**
 * @brief <b>bot_1</b> -- Peeks value at the next to bottom of stack.
 * @details Returns pointer to int value of next to bottom element in stack.
 * @param [in] stack - The identier of the stack inside ps structure.
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
 * @return If stack size is greater than 1 returns a pointer to int value
 * of next to bottom element in stack.
 * Returns NULL if size of stack 0 or 1.
 * @warning TODO coletilla de NO NULL check.
 */
int	*bot_1(t_stack_name stack, t_ps_stacks *ps);

/**
 * @brief <b>top</b> -- Peeks value at the top of stack.
 * @details Returns pointer to int value of top element in stack.
 * @param [in] stack - The identier of the stack inside ps structure.
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
 * @return If stack is not empty returns a pointer to int value of top
 * element.
 * Returns NULL if stack is empty.
 * @warning TODO coletilla de NO NULL check.
 */
int	*top(t_stack_name stack, t_ps_stacks *ps);

/**
 * @brief <b>top_1</b> -- Peeks value at the previous to top of stack.
 * @details Returns pointer to int value of previous to top element in stack.
 * @param [in] stack - The identier of the stack inside ps structure.
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
 * @return If stack size is greater than 1 returns a pointer to int value
 * of previous to top element in stack.
 * Returns NULL if size of stack 0 or 1.
 * @warning TODO coletilla de NO NULL check.
 */
int	*top_1(t_stack_name stack, t_ps_stacks *ps);

#endif
