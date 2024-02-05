/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:44:16 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 14:02:56 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_lang.h"

void	pa(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->b);
	if (new != NULL)
		ft_dlclst_insfront(&ps->a, new);
}

void	pb(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->a);
	if (new != NULL)
		ft_dlclst_insfront(&ps->b, new);
}
