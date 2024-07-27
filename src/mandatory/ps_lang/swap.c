/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:45:35 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 10:39:09 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->a);
	ft_printf("sa\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}

void	sb(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->b);
	ft_printf("sb\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}

void	ss(t_ps_stacks *ps)
{
	sa(ps);
	sb(ps);
	ft_printf("ss\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}
