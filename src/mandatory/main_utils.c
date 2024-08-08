/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:27:22 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:43:23 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

void	exit_on_error(t_ps_stacks *ps)
{
	free_ps(&ps);
	ft_putendl_fd("Error", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	parse_arguments(t_ps_stacks *ps, int argc, char **argv)
{
	int			i;
	int			element;

	i = 1;
	if (MAKE_DEBUG_LVL)
		ft_printf("push_swap: parse_arguments: argc = %d\n", argc);
	if (argc == 1)
	{
		free_ps(&ps);
		exit(EXIT_FAILURE);
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
