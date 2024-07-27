/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:42:16 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 10:46:22 by lluque           ###   ########.fr       */
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

	i = 0;
	size = ft_dlclst_size(lst);
	if (size == 0)
		return (-1);
	node = lst;
	if (direction == ASCENDING)
		content = INT_MIN;
	else
		content = INT_MAX;
	while (i < size)
	{
		if (direction == ASCENDING && *(int *)node->content < content)
			return (0);
		if (direction == DESCENDING && *(int *)node->content > content)
			return (0);
		content = *(int *)node->content;
		node = node->next;
		i++;
	}
	return (1);
}
