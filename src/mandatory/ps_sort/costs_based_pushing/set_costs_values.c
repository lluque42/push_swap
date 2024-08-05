/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_costs_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:11:48 by lluque            #+#    #+#             */
/*   Updated: 2024/08/05 11:25:47 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>															//////
#include "libft.h"
#include "push_swap.h"

static void	calculate_cost_b(t_ps_stacks *ps, void *element)
{
	int			len;

	//if (MAKE_DEBUG_LVL)
	//	ft_printf("[calculate_cost_b] Calculating...\n");
	len = ft_dlclst_size(ps->b);
	if (get_current_pos_in_stack(element) <= len / 2)
		set_cost_b(element, get_current_pos_in_stack(element));
	else
		set_cost_b(element, -1 * (len - get_current_pos_in_stack(element)));
}

static void	calculate_cost_a(t_ps_stacks *ps, void *element)
{
	int			i;
	int			a_len;
	int			b_element_pws;
	t_dlclst	*current_a_node;
	char		input;

	a_len = ft_dlclst_size(ps->a);
	
	if (MAKE_DEBUG_LVL)
	{
		ft_printf("[calculate_cost_a] Just to be clear:\n");
		current_a_node = ft_dlclst_last(ps->b);
		ft_printf("\tft_dlclst_last(ps->b) = %d\n", get_value(current_a_node->content));
		current_a_node = ps->b;
		ft_printf("\tps->b = %d\n", get_value(current_a_node->content));
		ft_printf("\ttop(B, ps) = %d\n", get_value(top(B, ps)));
		ft_printf("\ttop_1(B, ps) = %d\n", get_value(top_1(B, ps)));
		ft_printf("\tbot_1(B, ps) = %d\n", get_value(bot_1(B, ps)));
		ft_printf("\tbot(B, ps) = %d\n", get_value(bot(B, ps)));
		ft_printf("[set_rot_instructions] Press any key...\n");
		read(0, &input, 1);
	}


//TODO
//	last no es lo que creo que es, ver lldb en curso
//TODO
	
	



	
	i = -1;
	while (++i < a_len)
	{
		b_element_pws = get_pos_when_sorted(element);
		if (b_element_pws < get_pos_when_sorted(current_a_node->content))
		{
			// This is alway ->next, FUCK!
			if (get_pos_when_sorted(current_a_node->next->content) > b_element_pws)
			{
				break ;
			}
		}
		current_a_node = current_a_node->prev;
	}
	if (i <= a_len / 2)
		set_cost_a(element, i);
	else
		set_cost_a(element, -1 * i);
}

static void	calculate_total_cost(void *element)
{
	int	dual_stack_rots;
	int single_stack_rots;

	//if (MAKE_DEBUG_LVL)
	//	ft_printf("[calculate_total_cost] Calculating...\n");
	if ((get_cost_a(element) >= 0 && get_cost_b(element) >= 0)
		|| (get_cost_a(element) < 0 && get_cost_b(element) < 0))
	{
		dual_stack_rots = ft_abs(get_cost_a(element) - get_cost_b(element));
		if (ft_abs(get_cost_a(element)) > ft_abs(get_cost_b(element)))
			single_stack_rots = ft_abs(get_cost_a(element)) - dual_stack_rots;
		else
			single_stack_rots = ft_abs(get_cost_b(element)) - dual_stack_rots;
	}
	else
	{
		dual_stack_rots = 0;
		single_stack_rots = ft_abs(get_cost_b(element)) + ft_abs(get_cost_a(element));
	}
	set_total_cost(element, dual_stack_rots + single_stack_rots);
}
		
void	set_costs_values(t_ps_stacks *ps)
{
	int			i;
	t_dlclst	*current_node;
	void		*element;
	int			len;

	current_node = ps->b;
	len = ft_dlclst_size(ps->b);
	i = -1;
	while (++i < len)
	{
		element = current_node->content;
		calculate_cost_b(ps, element);
		calculate_cost_a(ps, element);
		calculate_total_cost(element);
		current_node = current_node->next;
	}
	if (MAKE_DEBUG_LVL)
	{
		ft_printf("[set_costs_values] Costs set in stack B\n");
		print_stacks(ps);
	}
}
/* MY OLD APPROACH
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
	while (get_current_pos_in_stack(element) != target_pos)
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
	while (get_current_pos_in_stack(element) != target_pos)
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
		target_pos = get_target_pos_in_a_for_top_b(ps, current_node);
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
 */
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
