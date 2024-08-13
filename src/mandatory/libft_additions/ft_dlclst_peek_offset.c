/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlclst_peek_offset.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:26 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 13:43:44 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	*ft_dlclst_peek_offset(t_dlclst *head, int offset)
{
	long	steps;
	long	stop;

	if (head == NULL)
		return (NULL);
	if (ft_dlclst_size(head) < 2 && ft_abs(offset) == 1)
		return (NULL);
	steps = 0;
	stop = ft_abs(offset);
	while (steps < stop)
	{
		if (offset > 0)
			head = head->next;
		else
			head = head->prev;
		steps++;
	}
	return (head->content);
}
