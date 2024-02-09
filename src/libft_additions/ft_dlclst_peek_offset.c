/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlclst_peek_offset.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:26 by lluque            #+#    #+#             */
/*   Updated: 2024/02/08 21:26:31 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_additions.h"

void	*ft_dlclst_peek_offset(t_dlclst *head, int offset)
{
	long	steps;

	steps = 0;
	if (head == NULL || ft_abs(offset) > (ft_dlclst_size(head) - 1))
		return (NULL);
	while (steps < ft_abs(offset))
	{
		if (steps > 0)
			head = head->next;
		else
			head = head->prev;
		steps++;
	}
	return (head->content);
}
