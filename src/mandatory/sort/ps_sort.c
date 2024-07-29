/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:49:39 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 14:22:00 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// For now it is assumed that the elements to be sorted are a set of consecutive
// integers.
#include <stdlib.h>
#include "libft.h"
#include "push_swap.h"

int	ps_sort(t_ps_stacks *ps)
{
	int	*array;
	int	len;

	array = NULL;
	len = list_to_array(ps, &array);
	if (len == -1)
		return (0);
	classic_sorting(array, len);
	set_pos_when_sorted(ps, array, len);
	free(array);
	pre_sort(ps);
	return (1);
}
