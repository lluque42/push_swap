/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlclst_peek_pos_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:26 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 15:13:11 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_dlclst_peek_pos(t_dlclst *lst, unsigned int pos)
{
	unsigned int	steps;

	steps = 0;
	if (lst == NULL)
		return (NULL);
	while (steps < pos)
	{
		lst = lst->next;
		steps++;
	}
	return (lst->content);
}
