/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 23:19:31 by lluque            #+#    #+#             */
/*   Updated: 2024/07/31 23:33:07 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_a_two(t_ps_stacks *ps)
{
	int	first;
	int	second;

	if (ft_dlclst_size(ps->a) == 1)
		return ;
	first = get_value(top(A, ps));
	second = get_value(top_1(A, ps));
	if ((first < second))
		return ;
	sa(ps);
}
