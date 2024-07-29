/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos_when_sorted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:54:07 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 09:22:55 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_pos_when_sorted(t_ps_stacks *ps, int *array, int array_len)
{
	int			array_index;
	int			node_index;
	t_dlclst	*current_node;

	array_index = -1;
	while (++array_index < array_len)
	{
		current_node = ps->a;
		node_index = -1;
		while (++node_index < array_len)
		{
			if (get_value(current_node) == array[array_index])
			{
				((t_element *)current_node->content)->pos_when_sorted
					= array_index;
				if (MAKE_DEBUG_LVL)
					ft_printf("[set_pos_when_sorted] %d\n",
						((t_element *)current_node->content)->pos_when_sorted);
				break ;
			}
			current_node = current_node->next;
		}
	}
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}
