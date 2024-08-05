/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_target_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:11:04 by lluque            #+#    #+#             */
/*   Updated: 2024/08/01 00:57:06 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

//Current node in stack B
int	get_target_pos(t_ps_stacks *ps, t_dlclst *current_node)
{
	if (MAKE_DEBUG_LVL)
		ft_printf("[get_target_pos] TODO %p %p\n", ps, current_node);
	return (1);
}
/*
void	find_min_and_max(int *a_min, int *a_max, t_node *temp)
{
	*a_min = temp->s_index;
	*a_max = temp->s_index;
	while (temp->next != NULL)
	{
		if (*a_min > temp->next->s_index)
			*a_min = temp->next->s_index;
		if (*a_max < temp->next->s_index)
			*a_max = temp->next->s_index;
		temp = temp->next;
	}
}

void	check_min_and_max_diff(int *min_pos_diff, int *max_diff,
									t_node **a, t_node **b)
{
	t_node	*temp_a;
	int		next_diff;

	temp_a = *a;
	*max_diff = temp_a->s_index - (*b)->s_index;
	*min_pos_diff = 2147483647;
	if ((temp_a->s_index - (*b)->s_index) > 0)
		*min_pos_diff = (temp_a->s_index - (*b)->s_index);
	while (temp_a->next)
	{
		next_diff = temp_a->next->s_index - (*b)->s_index;
		if (*max_diff < next_diff)
			*max_diff = next_diff;
		if (next_diff > 0 && *min_pos_diff > next_diff)
			*min_pos_diff = next_diff;
		temp_a = temp_a->next;
	}
}

int	get_target_index(t_node **a, t_node **b)
{
	int		min_pos_diff;
	int		max_diff;
	int		target;
	int		a_min;
	int		a_max;

	target = 0;
	check_min_and_max_diff(&min_pos_diff, &max_diff, a, b);
	find_min_and_max(&a_min, &a_max, *a);
	if (max_diff > 0)
		target = min_pos_diff + (*b)->s_index;
	else if (max_diff < 0)
		target = a_min;
	return (target);
}

 */
