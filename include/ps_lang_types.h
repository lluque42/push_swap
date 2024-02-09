/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:23:34 by lluque            #+#    #+#             */
/*   Updated: 2024/02/08 22:54:41 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_lang_types.h
 * Types definitions for the "push swap language" layer.
*/

#ifndef PS_LANG_TYPES_H
# define PS_LANG_TYPES_H

# include "libft.h"

/**
 * @struct s_ps_stacks
 * @brief Base for typedef <b>t_ps_stacks</b> for the main data structure for
 * push_swap project.
 * @details This type is used as the main data structure for push_swap project.
 * It contains both stack a and b implemented with doubly linked circular list
 * implementation from libft.
 * @var s_ps_stacks::a
 * Stack a to be initialized and sorted.
 * @var s_ps_stacks::b
 * Stack b to be used while sorting stack a elements.
*/
typedef struct s_ps_stacks
{
	t_dlclst	*a;
	t_dlclst	*b;
}	t_ps_stacks;

/**
 * @enum e_stack_name
 * @brief Base for typedef <b>t_stack_name</b> identifies stack a or b.
 * @details This type is used in functions to identify a stack inside the
 * t_ps_stacks type. 
 * @var e_stack_name::A
 * Identifies stack 'a'.
 * @var e_stack_name::B
 * Identifies stack 'b'.
*/
typedef enum e_stack_name
{
	A,
	B
}	t_stack_name;

#endif
