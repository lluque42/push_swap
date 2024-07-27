/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:45:35 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 23:59:41 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sa(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->a);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	sb(t_ps_stacks *ps)
{
	ft_dlclst_swapfront(&ps->b);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

void	ss(t_ps_stacks *ps)
{
	sa(ps);
	sb(ps);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
