/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:45:35 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 16:06:15 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sa(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->a);
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
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}
