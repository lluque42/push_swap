/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:49 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 00:09:09 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->a, 1);
	ft_printf("rra\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rrb(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->b, 1);
	ft_printf("rrb\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

static void	rra_noprint(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->a, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

static void	rrb_noprint(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->b, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rrr(t_ps_stacks *ps)
{
	rra_noprint(ps);
	rrb_noprint(ps);
	ft_printf("rrr\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
