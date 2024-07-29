/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classic_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:51:35 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 22:23:18 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	classic_sorting(int *array_ptr, int array_len)
{
	int	i;
	int	temp;
	int	*array;

	array = array_ptr;
	i = 0;
	while (i < array_len - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	i = -1;
	if (MAKE_DEBUG_LVL)
	{
		while (++i < array_len)
			ft_printf("[classic_sorting] %d\n", array[i]);
	}
}
