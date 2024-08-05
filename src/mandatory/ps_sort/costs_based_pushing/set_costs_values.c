/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_costs_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:11:48 by lluque            #+#    #+#             */
/*   Updated: 2024/08/01 00:49:56 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	set_costs_b(t_ps_stacks *ps)
{
	int			len;
	int			i;
	t_dlclst	*current_node;
	void		*element;

	current_node = ps->b;
	element = current_node->content;
	len = ft_dlclst_size(ps->b);
	i = -1;
	while (++i < len)
	{
		if (get_current_pos_in_stack(element) < len / 2)
			set_cost_b(element, get_current_pos_in_stack(element) - len);
		else
			set_cost_b(element, get_current_pos_in_stack(element));
		current_node = current_node->next;
		element = current_node->content;
	}
}

// Movements in stack A to get to the target_pos in the next direction (upwards)
static int	get_next_dir_moves(t_ps_stacks *ps, int target_pos)
{
	int			i;
	t_dlclst	*current_node;
	void		*element;

	current_node = ps->a;
	element = current_node->content;
	i = 0;
	while (get_value(element) != target_pos)
	{
		current_node = current_node->next;
		element = current_node->content;
		i++;
	}
	return (i);
}

// Movements in stack A to get to the target_pos in the prev direction
// (downwards). The plus 1 is needed for the covention adopted when
// rotating to push.
static int	get_prev_dir_moves(t_ps_stacks *ps, int target_pos)
{
	int			i;
	t_dlclst	*current_node;
	void		*element;

	current_node = ft_dlclst_last(ps->a);
	element = current_node->content;
	i = 0;
	while (get_value(element) != target_pos)
	{
		current_node = current_node->prev;
		element = current_node->content;
		i++;
	}
	return (i + 1);
}

static void	set_costs_a(t_ps_stacks *ps)
{
	int			i;
	t_dlclst	*current_node;
	void		*element;
	int			target_pos;
	int			len;

	current_node = ps->b;
	element = current_node->content;
	len = ft_dlclst_size(ps->b);
	i = -1;
	while (++i < len)
	{
		target_pos = get_target_pos(ps, current_node);
		if (get_prev_dir_moves(ps, target_pos)
			< get_next_dir_moves(ps, target_pos))
			set_cost_a(element, -1 * get_prev_dir_moves(ps, target_pos));
		else
			set_cost_a(element, get_next_dir_moves(ps, target_pos));
		current_node = current_node->next;
		element = current_node->content;
	}
}

void	set_costs_values(t_ps_stacks *ps)
{
	set_costs_b(ps);
	set_costs_a(ps);
	if (MAKE_DEBUG_LVL)
	{
		ft_printf("[set_costs_values] Costs set in stack B\n");
		print_stacks(ps);
	}
}
/*
void	find_cost(t_node **a, t_node **b)
{
	int		size_b;
	t_node	*temp_b;
	int		back_moves;
	int		target_index;

	temp_b = *b;
	size_b = find_len(*b);
	while (temp_b)
	{
		temp_b->cost_b = temp_b->pos;
		if (temp_b->cost_b > size_b / 2)
			temp_b->cost_b = (temp_b->pos - size_b);
		target_index = get_target_index(a, &temp_b);
		back_moves = count_backward_moves(*a, target_index);
		temp_b->cost_a = count_forward_moves(*a, target_index);
		if (back_moves < temp_b->cost_a)
			temp_b->cost_a = back_moves * -1;
		temp_b = temp_b->next;
	}
}

*/
