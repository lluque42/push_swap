/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_interpreter.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:51:37 by lluque            #+#    #+#             */
/*   Updated: 2024/02/06 01:45:01 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_lang_interpreter.h
 * Set of function to interpret push-swap instruction language read from a file
 * descriptor (one instruction per line). The instructions will be executed on
 * an already initialized t_ps_stacks structure containing both a and b stacks.
*/

#ifndef PS_LANG_INTERPRETER_H
# define PS_LANG_INTERPRETER_H
# include <stdlib.h>
# include "ps_lang.h"

/**
 * @brief <b>exec_instruction</b> -- Executes a push-swap instruction on stacks.
 *
 * @param [in, out] ps - Pointer to a t_ps_stacks containing the pair of stacks
 * with valid data.
 *
 * @param [in] instruction - A string with only one instruction name and an
 * optional trailing newline char.
 *
 * @return Non-zero value if a valid instruction was parsed and executed.  
 * Returns 0 if no valid instruction was found.
*/
int	exec_instruction(t_ps_stacks *ps, char *instruction);

/**
 * @brief <b>ps_lang_interpreter</b> -- Read and executes push-swap instructions
 *
 * @details Reads a line from a file descriptor looking for valid push-swap
 * instructions. The instructions are executed in the order in which were read
 * until an error is found or the end of the file is reached.  
 * The t_ps_stacks data structure passed must be already initialized with the
 * desired data and is modified accordingly to the instructions.
 *
 * @param [in, out] ps - Pointer to a t_ps_stacks containing the pair of stacks
 * with valid data.
 *
 * @param [in] fd - A valid file descriptor from where the single instruction
 * lines will be read from.
 *
 * @return Non-zero value if a valid instruction was parsed and executed.  
 * Returns 0 if no valid instruction was found.
*/
int	ps_lang_interpreter(t_ps_stacks *ps, int fd);

#endif
