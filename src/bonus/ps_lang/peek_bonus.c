/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peek_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:26 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 12:00:42 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker_bonus.h"

int	*bot(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((int *)ft_dlclst_peek_offset(ps->a, -1));
	else
		return ((int *)ft_dlclst_peek_offset(ps->b, -1));
}

int	*bot_1(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((int *)ft_dlclst_peek_offset(ps->a, -2));
	else
		return ((int *)ft_dlclst_peek_offset(ps->b, -2));
}

int	*top(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((int *)ps->a->content);
	return ((int *)ps->b->content);
}

int	*top_1(t_stack_name stack, t_ps_stacks *ps)
{
	if ((stack == A && ps->a == NULL) || (stack == B && ps->b == NULL))
		return (NULL);
	if (stack == A)
		return ((int *)ft_dlclst_peek_offset(ps->a, 1));
	else
		return ((int *)ft_dlclst_peek_offset(ps->b, 1));
}
