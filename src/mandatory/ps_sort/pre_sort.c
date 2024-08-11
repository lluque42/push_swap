/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:03:11 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 21:28:37 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "libft.h"

static void	set_current_avg_pos_when_sorted(t_ps_stacks *ps)
{
	int			ret_val;
	int			temp;
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
	temp = ret_val / stack_a_size;
	if (ret_val % stack_a_size != 0)
		ret_val = temp + 1;
	else
		ret_val = temp;
	ps->avg_pos_when_sorted = ret_val;
	if (MAKE_DEBUG_LVL)
		ft_printf("[pre_sort: set_current_avg_pos_when_sorted] %d\n", ret_val);
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
	while (i < block_size)
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

void	pre_sort(t_ps_stacks *ps)
{
	int		block_size;
	char	input;

	ps->left_to_pre_sort = ft_dlclst_size(ps->a) - 3;
	while (ps->left_to_pre_sort > 0)
	{
		set_current_avg_pos_when_sorted(ps);
		block_size = (ps->left_to_pre_sort / 2) + 1;
		if (MAKE_DEBUG_LVL)
		{
			ft_printf("[pre_sort] avg_pos_when_sorted = %d; ",
				ps->avg_pos_when_sorted);
			ft_printf("block_size = %d; ", block_size);
			ft_printf("ps->left_to_pre_sort = %d\n", ps->left_to_pre_sort);
		}
		loop_block(ps, block_size);
	}
	sort_stack_a_last_three(ps);
	if (MAKE_DEBUG_LVL)
	{
		ft_printf("[pre_sort] Pre sorted! Press enter to continue...\n");
		read(0, &input, 1);
	}
}
