/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:49:39 by lluque            #+#    #+#             */
/*   Updated: 2024/07/31 23:28:14 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_sort(t_ps_stacks *ps)
{
	int	len_a;

	len_a = ft_dlclst_size(ps->a);
	if (len_a <= 3)
	{
		if (len_a <= 2)
			sort_stack_a_two(ps);
		else
			sort_stack_a_last_three(ps);
		return (1);
	}
	if (!sorting_preparations(ps))
		return (0);
	pre_sort(ps);
	costs_based_pushing(ps);
	rotate_until_sorted(ps);
	return (1);
}
