/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:14 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 14:22:15 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_lang.h"

void	ra(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->a, 1);
}

void	rb(t_ps_stacks *ps)
{
	ft_dlclst_rotatenext(&ps->b, 1);
}

void	rr(t_ps_stacks *ps)
{
	ra(ps);
	rb(ps);
}
