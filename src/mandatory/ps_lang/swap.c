/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:45:35 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:52:48 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	sa(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->a);
	write(STDOUT_FILENO, "sa\n", 3);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	sb(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->b);
	write(STDOUT_FILENO, "sb\n", 3);
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
	write(STDOUT_FILENO, "ss\n", 3);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
