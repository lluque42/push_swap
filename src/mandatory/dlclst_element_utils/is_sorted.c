/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:42:16 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 15:53:45 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"
#include "push_swap.h"

int	is_sorted(t_dlclst *lst, t_sortdir direction)
{
	int			content;
	t_dlclst	*node;
	int			size;
	int			i;

	size = ft_dlclst_size(lst);
	if (size == 0)
		return (-1);
	node = lst;
	content = INT_MAX;
	if (direction == ASCENDING)
		content = INT_MIN;
	i = -1;
	while (++i < size)
	{
		if (direction == ASCENDING
			&& ((t_element *)node->content)->value < content)
			return (0);
		if (direction == DESCENDING
			&& ((t_element *)node->content)->value > content)
			return (0);
		content = ((t_element *)node->content)->value;
		node = node->next;
	}
	return (1);
}
