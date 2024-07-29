/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:34:20 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 21:40:39 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "push_swap.h"

int	list_to_array(t_ps_stacks *ps, int **array)
{
	int			len;
	int			i;
	t_dlclst	*current_node;

	len = ft_dlclst_size(ps->a);
	ft_printf("[list_to_array] len == %d\n", len);
	*array = malloc(len * sizeof (int));
	if (*array == NULL)
		return (-1);
	current_node = ps->a;
	i = -1;
	while (++i < len)
	{
		(*array)[i] = ((t_element *)current_node->content)->value;
		current_node = current_node->next;
		if (MAKE_DEBUG_LVL)
			ft_printf("[list_to_array] array[%d] == %d\n", i, (*array)[i]);
	}
	return (len);
}
