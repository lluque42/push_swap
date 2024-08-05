/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest_cost_element_pos.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:12:29 by lluque            #+#    #+#             */
/*   Updated: 2024/08/01 00:39:14 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"
#include "push_swap.h"

int	get_lowest_cost_element_pos(t_ps_stacks *ps)
{
	t_dlclst	*current_node;
	void		*element;
	int			current_cost;
	int			lowest_cost;
	int			ret_val;

	lowest_cost = INT_MAX;
	current_node = ps->b;
	element = current_node->content;
	while (current_node != ft_dlclst_last(ps->b))
	{
		current_cost = ft_abs(get_cost_a(element))
			+ ft_abs(get_cost_b(element));
		if (lowest_cost > current_cost)
		{
			lowest_cost = current_cost;
			ret_val = get_current_pos_in_stack(element);
		}
		current_node = ps->b;
		element = current_node->content;
	}
	if (MAKE_DEBUG_LVL)
		ft_printf("[get_lowest_cost_element_pos] %d\n", ret_val);
	return (ret_val);
}
