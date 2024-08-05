/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_total_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:03:25 by lluque            #+#    #+#             */
/*   Updated: 2024/08/04 14:46:37 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	set_total_cost(void *element, int total_cost)
{
	((t_element *)element)->total_cost = total_cost;
}
