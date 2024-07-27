/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_init_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:23:34 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 12:21:54 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_lang_init_bonus.h
 * Support functions for the "push swap language". Memory allocation and freeing
 * function for the structure; initialization of the structure with user
 * arguments; no-duplication check; etc.
*/

#ifndef PS_LANG_INIT_BONUS_H
# define PS_LANG_INIT_BONUS_H

# include "checker_bonus.h"

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

#endif
