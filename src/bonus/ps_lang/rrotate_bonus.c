/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:49 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 11:59:51 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rra(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->a, 1);
	ft_printf("rra\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}

void	rrb(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->b, 1);
	ft_printf("rrb\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}

void	rrr(t_ps_stacks *ps)
{
	rra(ps);
	rrb(ps);
	ft_printf("rrr\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}
