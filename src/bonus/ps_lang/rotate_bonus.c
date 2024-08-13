/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:14 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 00:00:16 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->a, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rb(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->b, 1);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	rr(t_ps_stacks *ps)
{
	ra(ps);
	rb(ps);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
