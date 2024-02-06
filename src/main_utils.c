/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:27:22 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 22:46:01 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_lang.h"
#include <stdlib.h>

void	exit_on_error(t_ps_stacks *ps)
{
	free_ps(&ps);
	ft_putendl_fd("Error", 2);
	exit(1);
}

void	parse_arguments(t_ps_stacks *ps, int argc, char **argv)
{
	int			i;
	int			element;

	i = 1;
	if (argc == 1)
	{
		free_ps(&ps);
		exit(0);
	}
	while (i < argc)
	{
		if (!ft_aisi(argv[i]))
			exit_on_error(ps);
		element = ft_atoi(argv[i]);
		if (already_in_a(ps, element))
			exit_on_error(ps);
		if (!bottom_pusha(ps, element))
			exit_on_error(ps);
		i++;
	}
}
