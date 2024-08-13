/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_ran_set.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:55:00 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 17:59:41 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include "tester.h"
#include "libft.h"

int	create_ran_set(t_test *t)
{
	int	*ran_set;
	int	i;
	int	num;

	ran_set = malloc(sizeof (int) * t->ran_num);
	if (ran_set == NULL)
		return (0);
	i = -1;
	while (++i < t->ran_num)
	{
		num = rng(INT_MIN, INT_MAX);
		while (!already_in_array(ran_set, i + 1, num))
			num = rng(INT_MIN, INT_MAX);
		ran_set[i] = num;
	}
	t->ran_set = ran_set;
	return (1);
}
