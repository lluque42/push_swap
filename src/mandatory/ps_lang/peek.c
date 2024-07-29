/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peek.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:26 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 13:10:49 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

t_element	*bot(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((t_element *)ft_dlclst_peek_offset(ps->a, -1));
	else
		return ((t_element *)ft_dlclst_peek_offset(ps->b, -1));
}

t_element	*bot_1(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((t_element *)ft_dlclst_peek_offset(ps->a, -2));
	else
		return ((t_element *)ft_dlclst_peek_offset(ps->b, -2));
}

t_element	*top(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((t_element *)ps->a->content);
	return ((t_element *)ps->b->content);
}

t_element	*top_1(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((t_element *)ft_dlclst_peek_offset(ps->a, 1));
	else
		return ((t_element *)ft_dlclst_peek_offset(ps->b, 1));
}
