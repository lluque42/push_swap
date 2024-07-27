/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:14 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 10:45:12 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->a, 1);
	ft_printf("ra\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}

void	rb(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->b, 1);
	ft_printf("rb\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}

void	rr(t_ps_stacks *ps)
{
	ra(ps);
	rb(ps);
	ft_printf("rr\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}
