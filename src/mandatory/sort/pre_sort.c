/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:03:11 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 15:09:54 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	set_current_avg_pos_when_sorted(t_ps_stacks *ps)
{
	int			ret_val;
	int			stack_a_size;
	int			i;
	t_dlclst	*current_node;

	ret_val = 0;
	stack_a_size = ft_dlclst_size(ps->a);
	i = -1;
	current_node = ps->a;
	while (++i < stack_a_size)
	{
		ret_val += get_pos_when_sorted(current_node->content);
		current_node = current_node->next;
	}
	ret_val /= stack_a_size;
	if (ret_val % stack_a_size != 0)
		ret_val++;
	ps->avg_pos_when_sorted = ret_val;
	if (MAKE_DEBUG_LVL)
		ft_printf("[set_current_avg_pos_when_sorted] %d\n", ret_val);
}

static void	account_for_pushed(t_ps_stacks *ps, int *i)
{
	ps->left_to_pre_sort = ps->left_to_pre_sort -1;
	*i = *i + 1;
}

static void	loop_block(t_ps_stacks *ps, int block_size)
{
	int			i;

	i = 0;
	while (i <= block_size)
	{
		if (get_pos_when_sorted(top(A, ps)) < ps->avg_pos_when_sorted)
		{
			pb(ps);
			account_for_pushed(ps, &i);
		}
		else if (get_pos_when_sorted(top_1(A, ps)) < ps->avg_pos_when_sorted)
		{
			ra(ps);
			pb(ps);
			account_for_pushed(ps, &i);
		}
		else if (get_pos_when_sorted(bot(A, ps)) < ps->avg_pos_when_sorted)
		{
			rra(ps);
			pb(ps);
			account_for_pushed(ps, &i);
		}
		else
			ra(ps);
	}
}

void	sort_stack_a_last_three(t_ps_stacks *ps)
{
	int	first;
	int	second;
	int	third;

	first = get_pos_when_sorted(top(A, ps));
	second = get_pos_when_sorted(top_1(A, ps));
	third = get_pos_when_sorted(bot(A, ps));
	if ((first < second) && (second < third))
		return ;
	if ((first < second) && (first < third))
	{
		sa(ps);
		ra(ps);
	}
	if ((first < second) && (first > third))
		rra(ps);
	if ((first > second) && (first > third) && (second < third))
		ra(ps);
	if ((first > second) && (first > third) && (second > third))
	{
		sa(ps);
		rra(ps);
	}
	if ((first > second) && (first < third) && (second < third))
		sa(ps);
}

// Smartly pushes to stack B every element of stack A but three. It does so in a
// block-by-block basis. The size of the block is half the number of elements
// that remain to be pushed + 1. The criteria for an element to be pushed is
// dependant on the current average of the pos_when_sorted which updates in a
// block-by-block basis. Auxiliary function loop_block() tries with top A,
// second-to-top A, and bottom A elements and pushes to B the first one with
// a pos_when_sorted smaller than the block's avg_pos_when_sorted.  
// The pre-sorting stage ends with sorting the three elements left in stack A.
// This three sorted elements will be the reference to push back everything to
// stack A using movement costs analysis.
void	pre_sort(t_ps_stacks *ps)
{
	int			block_size;

	ps->left_to_pre_sort = ft_dlclst_size(ps->a) - 3;
	while (ps->left_to_pre_sort > 0)
	{
		set_current_avg_pos_when_sorted(ps);
		block_size = (ps->left_to_pre_sort / 2) + 1;
		if (MAKE_DEBUG_LVL)
		{
			ft_printf("[pb_block] avg_pos_when_sorted = %d; ",
				ps->avg_pos_when_sorted);
			ft_printf("block_size = %d; ", block_size);
			ft_printf("ps->left_to_pre_sort = %d\n", ps->left_to_pre_sort);
		}
		loop_block(ps, block_size);
	}
	sort_stack_a_last_three(ps);
}
