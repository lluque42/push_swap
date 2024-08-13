/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:27:22 by lluque            #+#    #+#             */
/*   Updated: 2024/08/13 13:44:44 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_main_utils.h
 * Set of functions to be used with push swap programs main() functions.
*/

#ifndef PS_MAIN_UTILS_H
# define PS_MAIN_UTILS_H
# include "push_swap.h"

/**
 * @brief <b>exit_on_error</b> -- Frees t_ps_stacks structure containing the
 * stacks, prints "Error" on stderr and exits with code 1.
 *
 * @param [in] ps - The pointer to t_ps_stacks data structure.
*/
void	exit_on_error(t_ps_stacks *ps);

/**
 * @brief <b>parse_arguments</b> -- Fills stack a with command line arguments.
 *
 * @details Parses and validates command line arguments and pushes valid
 * integers into stack a. If one argument is invalid the function
 * exit_on_error() is called.
 * It parses argv as either a single argument with space separated integers or
 * several independent integer argument.
 * 
 * @param [in] ps - The pointer to t_ps_stacks data structure.
 *
 * @param [in] argc - Main parameter argc.
 *
 * @param [in] argv - Main parameter argv.
*/
void	parse_arguments(t_ps_stacks *ps, int argc, char **argv);

#endif
