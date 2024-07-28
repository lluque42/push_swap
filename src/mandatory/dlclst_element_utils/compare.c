/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:06:44 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 15:45:38 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare(void *a, void *b)
{
	if (((t_element *)a)->value == ((t_element *)b)->value)
		return (1);
	return (0);
}
/*
int	compare(void *a, void *b)
{
	if (*(int *)a == *(int *)b)
		return (1);
	return (0);
}
*/
