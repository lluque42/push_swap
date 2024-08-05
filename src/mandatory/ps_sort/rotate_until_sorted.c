/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_until_sorted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:07:06 by lluque            #+#    #+#             */
/*   Updated: 2024/08/01 01:34:12 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	rotate_until_sorted(t_ps_stacks *ps)
{
	ft_printf("[rotate_until_sorted] dummy %p\n", ps);
}
/*
	Recalculate pos_in_stack with current_pos_in_stack()
	Find element with pos_when_sorted == 0
	With ft_dlclst_size() and the former, determine the optimal rotation
		direction.
	Rotate accordingly
*/
