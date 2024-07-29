/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_types.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:23:34 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 14:37:10 by lluque           ###   ########.fr       */
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
 * @var s_ps_stacks::left_to_pre_sort
 * The number of elements that still need to be pre-sorted. Used just after
 * the initialization (stack a full, stack b empty). Decreases each time pb().
 * @var s_ps_stacks::avg_pos_when_sorted
 * Set and updated by pre_sort() auxiliary function pb_block() every time it
 * processes a block. It refers to the current average pos_when_sorted of
 * the elements still in stack A.
*/
typedef struct s_ps_stacks
{
	t_dlclst	*a;
	t_dlclst	*b;
	int			left_to_pre_sort;
	int			avg_pos_when_sorted;
}	t_ps_stacks;
/**
 * @typedef t_ps_stacks
 * Based on the @link s_ps_stacks @endlink struct.
 */

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
/**
 * @typedef t_stack_name
 * Based on the @link e_stack_name @endlink.
 */

#endif
