/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:44:16 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 00:08:00 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	pa(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->b);
	if (new != NULL)
		ft_dlclst_insfront(&ps->a, new);
	ft_printf("pa\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	pb(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->a);
	if (new != NULL)
		ft_dlclst_insfront(&ps->b, new);
	ft_printf("pb\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	pa_noprint(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->b);
	if (new != NULL)
		ft_dlclst_insfront(&ps->a, new);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	pb_noprint(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->a);
	if (new != NULL)
		ft_dlclst_insfront(&ps->b, new);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
