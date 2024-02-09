/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peek.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:26 by lluque            #+#    #+#             */
/*   Updated: 2024/02/08 22:26:56 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_additions.h"
#include "dlclst_int_utils.h"
#include "ps_lang.h"

int	*bottom(t_stack_name stack, t_ps_stacks *ps)
{
	if (stack == A)
		return ((int *)ft_dlclst_peek_offset(ps->a, -1));
	else
		return ((int *)ft_dlclst_peek_offset(ps->b, -1));
}

int	*nbottom(t_stack_name stack, t_ps_stacks *ps)
{
	if (stack == A)
		return ((int *)ft_dlclst_peek_offset(ps->a, -2));
	else
		return ((int *)ft_dlclst_peek_offset(ps->b, -2));
}

int	*top(t_stack_name stack, t_ps_stacks *ps)
{
	if (stack == A)
		return ((int *)ps->a->content);
	else
		return ((int *)ps->b->content);
}

int	*ptop(t_stack_name stack, t_ps_stacks *ps)
{
	if (stack == A)
		return ((int *)ft_dlclst_peek_offset(ps->a, 1));
	else
		return ((int *)ft_dlclst_peek_offset(ps->b, 1));
}
