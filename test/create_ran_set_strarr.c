/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_ran_set_strarr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:05:45 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 21:55:52 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include "libft.h"

int	create_ran_set_strarr(t_test *t)
{
	int	i;

	t->ran_set_strarr = ft_calloc(t->ran_num + 2, sizeof (char *));
	if (t->ran_set_strarr == NULL)
		return (0);
	if (ft_strrchr(t->ps_filename, '/') != NULL)
		t->ran_set_strarr[0] = ft_strdup(ft_strrchr(t->ps_filename, '/') + 1);
	else
		t->ran_set_strarr[0] = ft_strdup(t->ps_filename);
	if (t->ran_set_strarr[0] == NULL)
		return (0);
	i = -1;
	while (++i < t->ran_num)
	{
		t->ran_set_strarr[i + 1] = ft_itoa(t->ran_set[i]);
		if (t->ran_set_strarr[i + 1] == NULL)
			return (0);
	}
	return (1);
}
