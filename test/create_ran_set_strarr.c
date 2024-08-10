/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_ran_set_strarr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:05:45 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 00:12:26 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include "libft.h"

int	create_ran_set_strarr(t_test *t)
{
	int	i;

	t->ran_set_strarr = ft_calloc(t->ran_num + 1, sizeof (char *));
	if (t->ran_set_strarr == NULL)
		return (0);
	i = -1;
	while (++i < t->ran_num)
	{
		t->ran_set_strarr[i] = ft_itoa(t->ran_set[i]);
		if (t->ran_set_strarr[i] == NULL)
			return (0);
		ft_printf("[create_ran_set_strarr] %s\n", t->ran_set_strarr[i]);
	}
	return (1);
}
