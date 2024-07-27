/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:14 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 00:08:39 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->a, 1);
	ft_printf("ra\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rb(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->b, 1);
	ft_printf("rb\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

static void	ra_noprint(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->a, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

static void	rb_noprint(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->b, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rr(t_ps_stacks *ps)
{
	ra_noprint(ps);
	rb_noprint(ps);
	ft_printf("rr\n");
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
