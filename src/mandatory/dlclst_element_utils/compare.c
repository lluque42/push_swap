/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:06:44 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 12:50:50 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare(void *element_a, void *element_b)
{
	if (((t_element *)element_a)->value == ((t_element *)element_b)->value)
		return (1);
	return (0);
}
