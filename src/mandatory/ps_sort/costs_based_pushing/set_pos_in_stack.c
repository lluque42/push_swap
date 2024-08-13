/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos_in_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:22:10 by lluque            #+#    #+#             */
/*   Updated: 2024/08/07 23:47:33 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	set_pos_in_stack(t_ps_stacks *ps)
{
	t_dlclst	*current_node;
	int			i;
	int			stack_len;

	stack_len = ft_dlclst_size(ps->a);
	current_node = ps->a;
	i = -1;
	while (++i < stack_len)
	{
		((t_element *)current_node->content)->pos_in_stack = i;
		current_node = current_node->next;
	}
	stack_len = ft_dlclst_size(ps->b);
	current_node = ps->b;
	i = -1;
	while (++i < stack_len)
	{
		((t_element *)current_node->content)->pos_in_stack = i;
		current_node = current_node->next;
	}
}
