/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_costs_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:11:48 by lluque            #+#    #+#             */
/*   Updated: 2024/08/07 23:59:25 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "push_swap.h"

static void	calculate_cost_b(t_ps_stacks *ps, void *element)
{
	int			len;

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

	current_a_node = ps->a;
	a_len = ft_dlclst_size(ps->a);
	b_element_pws = get_pos_when_sorted(element);
	i = -1;
	while (++i <= a_len)
	{
		if (b_element_pws < get_pos_when_sorted(current_a_node->content))
		{
			if (get_pos_when_sorted(current_a_node->prev->content)
				< b_element_pws
				|| get_pos_when_sorted(current_a_node->content)
				< get_pos_when_sorted(current_a_node->prev->content))
				break ;
		}
		current_a_node = current_a_node->next;
	}
	if (i < a_len / 2)
		set_cost_a(element, i);
	else
		set_cost_a(element, i - a_len);
}

static void	calculate_total_cost(void *element)
{
	int	dual_stack_rots;
	int	single_stack_rots;

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
		single_stack_rots = ft_abs(get_cost_b(element))
			+ ft_abs(get_cost_a(element));
	}
	set_total_cost(element, dual_stack_rots + single_stack_rots);
}

void	set_costs_values(t_ps_stacks *ps)
{
	int			i;
	t_dlclst	*current_node;
	void		*element;
	int			len;
	char		input;

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
		print_stacks(ps);
		ft_printf("[set_costs_values] Costs set in stack B! Press enter...\n");
		read(0, &input, 1);
	}
}
