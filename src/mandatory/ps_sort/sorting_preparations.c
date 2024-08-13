/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_preparations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:03:05 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 20:23:16 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "push_swap.h"

static int	list_to_array(t_ps_stacks *ps, int **array)
{
	int			len;
	int			i;
	t_dlclst	*current_node;

	len = ft_dlclst_size(ps->a);
	if (MAKE_DEBUG_LVL)
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

static void	classic_sorting(int *array_ptr, int array_len)
{
	int	i;
	int	temp;
	int	*array;

	array = array_ptr;
	i = 0;
	while (i < array_len - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	i = -1;
	if (MAKE_DEBUG_LVL)
	{
		while (++i < array_len)
			ft_printf("[classic_sorting] %d\n", array[i]);
	}
}

static void	set_pos_when_sorted(t_ps_stacks *ps, int *array, int array_len)
{
	int			array_index;
	int			node_index;
	t_dlclst	*current_node;

	array_index = -1;
	while (++array_index < array_len)
	{
		current_node = ps->a;
		node_index = -1;
		while (++node_index < array_len)
		{
			if (get_value(current_node->content) == array[array_index])
			{
				((t_element *)current_node->content)->pos_when_sorted
					= array_index;
				if (MAKE_DEBUG_LVL)
					ft_printf("[set_pos_when_sorted] %d\n",
						((t_element *)current_node->content)->pos_when_sorted);
				break ;
			}
			current_node = current_node->next;
		}
	}
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
}

int	sorting_preparations(t_ps_stacks *ps)
{
	int	*array;
	int	len;

	array = NULL;
	len = list_to_array(ps, &array);
	if (len == -1)
		return (0);
	classic_sorting(array, len);
	set_pos_when_sorted(ps, array, len);
	free(array);
	return (1);
}
