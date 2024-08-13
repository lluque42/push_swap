/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs_based_pushing.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:43:19 by lluque            #+#    #+#             */
/*   Updated: 2024/08/04 18:46:59 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	costs_based_pushing(t_ps_stacks *ps)
{
	int			lowest_cost_element_pos;

	while (ps->b != NULL)
	{
		set_pos_in_stack(ps);
		set_costs_values(ps);
		lowest_cost_element_pos = get_lowest_cost_element_pos(ps);
		rotate_before_pa(ps, lowest_cost_element_pos);
		pa(ps);
	}
}
