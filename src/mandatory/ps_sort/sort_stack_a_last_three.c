/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a_last_three.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 23:19:31 by lluque            #+#    #+#             */
/*   Updated: 2024/07/31 23:32:48 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_a_last_three(t_ps_stacks *ps)
{
	int	first;
	int	second;
	int	third;

	first = get_value(top(A, ps));
	second = get_value(top_1(A, ps));
	third = get_value(bot(A, ps));
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
