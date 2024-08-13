/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_until_sorted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:07:06 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:53:47 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	rotate_until_sorted(t_ps_stacks *ps)
{
	int				i;
	t_dlclst		*current_node;
	int				a_len;

	current_node = ps->a;
	i = 0;
	while (get_pos_when_sorted(current_node->content) != 0)
	{
		current_node = current_node->next;
		i++;
	}
	a_len = ft_dlclst_size(ps->a);
	if (i > a_len / 2)
		i = i - a_len;
	if (i > 0)
		while (i-- != 0)
			ra(ps);
	else
		while (i++ != 0)
			rra(ps);
}
