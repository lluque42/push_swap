/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 08:44:46 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 11:59:30 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker_bonus.h"

t_ps_stacks	*init_ps(void)
{
	t_ps_stacks	*ps;

	ps = malloc(sizeof (t_ps_stacks));
	if (ps == NULL)
		return (NULL);
	ps->a = NULL;
	ps->b = NULL;
	return (ps);
}

void	free_ps(t_ps_stacks **ps)
{
	ft_dlclst_clear(&(*ps)->a, del);
	ft_dlclst_clear(&(*ps)->b, del);
	free(*ps);
	*ps = NULL;
}

int	already_in_a(t_ps_stacks *ps, int element)
{
	return (ft_dlclst_search(ps->a, compare, &element) >= 0);
}

int	bottom_pusha(t_ps_stacks *ps, int element)
{
	t_dlclst	*node;
	void		*content;

	content = malloc(sizeof (int));
	if (content == NULL)
	{
		free_ps(&ps);
		return (0);
	}
	*(int *)content = element;
	node = ft_dlclst_new(content);
	if (node == NULL)
	{
		free(content);
		free_ps(&ps);
		return (0);
	}
	ft_dlclst_insback(&ps->a, node);
	return (1);
}
