/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:14 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:51:15 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	ra(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->a, 1);
	write(STDOUT_FILENO, "ra\n", 3);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rb(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->b, 1);
	write(STDOUT_FILENO, "rb\n", 3);
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
	write(STDOUT_FILENO, "rr\n", 3);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
