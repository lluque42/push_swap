/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_before_pa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:13:06 by lluque            #+#    #+#             */
/*   Updated: 2024/08/01 01:29:50 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	rotate_before_pa(t_ps_stacks *ps, int lowest_cost_element_pos)
{
	ft_printf("[rotate_before_ps] dummy %p %d\n", ps, lowest_cost_element_pos);
}
/*
void	reorder_a_and_b(int cheapest_pos, t_node **a, t_node **b)
{
	t_node	*temp;

	temp = *b;
	while (temp->pos != cheapest_pos)
		temp = temp->next;
	if ((temp->cost_a < 0) && (temp->cost_b < 0))
		reverse_rotate_both(a, b, temp->cost_a, temp->cost_b);
	else if ((temp->cost_a > 0) && (temp->cost_b > 0))
		rotate_both(a, b, temp->cost_a, temp->cost_b);
	else if (temp->cost_b >= 0 && temp->cost_a <= 0)
	{
		rotate(b, "rb", temp->cost_b);
		reverse_rotate(a, "rra", temp->cost_a);
	}
	else if (temp->cost_b <= 0 && temp->cost_a >= 0)
	{
		reverse_rotate(b, "rrb", temp->cost_b);
		rotate(a, "ra", temp->cost_a);
	}
}
*/
