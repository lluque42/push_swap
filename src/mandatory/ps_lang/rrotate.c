/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:49 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:52:28 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	rra(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->a, 1);
	write(STDOUT_FILENO, "rra\n", 4);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rrb(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->b, 1);
	write(STDOUT_FILENO, "rrb\n", 4);
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
	write(STDOUT_FILENO, "rrr\n", 4);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
