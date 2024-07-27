/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:45:35 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 00:09:38 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->a);
	ft_printf("sa\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	sb(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->b);
	ft_printf("sb\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

static void	sa_noprint(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->a);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

static void	sb_noprint(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->b);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	ss(t_ps_stacks *ps)
{
	sa_noprint(ps);
	sb_noprint(ps);
	ft_printf("ss\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
