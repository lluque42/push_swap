/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_print.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:23:34 by lluque            #+#    #+#             */
/*   Updated: 2024/02/09 14:07:04 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_lang_print.h
 * TODO
 * Instructions for the "push swap language" and optional functions to implement
 * the highest level of abstraction (based on an lower level doubly linked
 * circular list implementation).  
 * Supporting data structures and fuctions for peeking values, memory
 * allocation, initialization, printing, and others.
*/

#ifndef PS_LANG_PRINT_H
# define PS_LANG_PRINT_H

# include "ps_lang_types.h"

/**
 * @brief <b>print_stacks</b> -- Prints both stacks next to each other.
 *
 * @details Prints the content of both stack a and b. The uppermost element is
 * the top of the stack.
 *
 * @param [in] ps - The address of the pointer to the push swap stacks struct.
 */
void	print_stacks(t_ps_stacks *ps);

#endif
