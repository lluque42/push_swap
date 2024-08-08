/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest_cost_element_pos.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:12:29 by lluque            #+#    #+#             */
/*   Updated: 2024/08/07 18:57:21 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"
#include "push_swap.h"

int	get_lowest_cost_element_pos(t_ps_stacks *ps)
{
	t_dlclst	*current_node;
	int			ret_val;
	int			lowest_cost;
	int			i;
	int			len_b;

	lowest_cost = INT_MAX;
	current_node = ps->b;
	len_b = ft_dlclst_size(ps->b);
	i = -1;
	while (++i < len_b)
	{
		if (get_total_cost(current_node->content) < lowest_cost)
		{
			lowest_cost = get_total_cost(current_node->content);
			ret_val = i;
		}
		current_node = current_node->next;
	}
	if (MAKE_DEBUG_LVL)
		ft_printf("[get_lowest_cost_element_pos] %d\n", ret_val);
	return (ret_val);
}
