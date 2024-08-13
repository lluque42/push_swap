/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:42:16 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 12:48:41 by lluque           ###   ########.fr       */
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
		if (direction == ASCENDING && get_value(node->content) < content)
			return (0);
		if (direction == DESCENDING && get_value(node->content) > content)
			return (0);
		content = get_value(node->content);
		node = node->next;
	}
	return (1);
}
