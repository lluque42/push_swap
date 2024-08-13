/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:49 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 00:00:31 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rra(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->a, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rrb(t_ps_stacks *ps)
{
	ft_dlclst_rotateprev(&ps->b, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rrr(t_ps_stacks *ps)
{
	rra(ps);
	rrb(ps);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
