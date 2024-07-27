/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:44:16 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 10:44:45 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	pa(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->b);
	if (new != NULL)
		ft_dlclst_insfront(&ps->a, new);
	ft_printf("pa\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}

void	pb(t_ps_stacks *ps)
{
	t_dlclst	*new;

	new = ft_dlclst_extractfront(&ps->a);
	if (new != NULL)
		ft_dlclst_insfront(&ps->b, new);
	ft_printf("pb\n");
	if (DEBUG_LVL)
	{
		print_stacks(ps);
		ft_printf("Press enter to continue\n");
		ft_gnl(0);
	}
}
