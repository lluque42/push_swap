/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs_based_pushing.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:43:19 by lluque            #+#    #+#             */
/*   Updated: 2024/07/31 23:36:24 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	costs_based_pushing(t_ps_stacks *ps)
{
	int	b_size;
	int	i;
	int	lowest_cost_element_pos;

	b_size = ft_dlclst_size(ps->b);
	i = -1;
	while (++i < b_size)
	{
		set_pos_in_stack(ps);
		set_costs_values(ps);
		lowest_cost_element_pos = get_lowest_cost_element_pos(ps);
		rotate_before_pa(ps, lowest_cost_element_pos);
		pa(ps);
	}
}
