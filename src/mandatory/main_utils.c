/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:27:22 by lluque            #+#    #+#             */
/*   Updated: 2024/08/13 14:38:30 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

void	exit_ok(t_ps_stacks *ps, char **parseable_argv)
{
	ft_free_strarr(parseable_argv);
	free_ps(&ps);
	exit(EXIT_SUCCESS);
}

void	exit_on_error(t_ps_stacks *ps)
{
	free_ps(&ps);
	ft_putendl_fd("Error", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

static int	arguments_loop(t_ps_stacks *ps,
		char **parseable_argv,
		int parseable_argc,
		int i)
{
	int	element;

	while (i < parseable_argc)
	{
		if (!ft_aisi(parseable_argv[i]))
			return (0);
		element = ft_atoi(parseable_argv[i]);
		if (already_in_a(ps, element))
			return (0);
		if (!bottom_pusha(ps, element))
			return (0);
		i++;
	}
	return (1);
}

static void	two_args_case(t_ps_stacks *ps,
		char ***parseable_argv,
		int *parseable_argc,
		char **argv)
{
	*parseable_argv = ft_split(argv[1], ' ');
	if (*parseable_argv == NULL)
		exit_on_error(ps);
	*parseable_argc = ft_strarrlen(*parseable_argv);
}

void	parse_arguments(t_ps_stacks *ps, int argc, char **argv)
{
	int		i;
	char	**parseable_argv;
	int		parseable_argc;
	int		loop_ok;

	if (argc == 1)
	{
		free_ps(&ps);
		exit(EXIT_FAILURE);
	}
	parseable_argv = argv;
	parseable_argc = argc;
	i = 1;
	if (argc == 2)
	{
		two_args_case(ps, &parseable_argv, &parseable_argc, argv);
		i = 0;
		if (parseable_argv[0] == NULL)
			exit_ok(ps, parseable_argv);
	}
	loop_ok = arguments_loop(ps, parseable_argv, parseable_argc, i);
	if (parseable_argv != argv)
		ft_free_strarr(parseable_argv);
	if (!loop_ok)
		exit_on_error(ps);
}
/*
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
*/
