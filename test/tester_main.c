/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/08/10 22:32:53 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "libft.h"
#include "tester.h"

int	main(int argc, char **argv, char **envp)
{
	t_test	*t;

	t = allocate_test_type();
	if (t == NULL)
		return (EXIT_FAILURE);
	if (!args_validation(argc, argv, t) || envp == NULL)		// for now envp not used
		return (free_test_type(t), EXIT_FAILURE);
	t->test_reports_dir = create_test_report_dir(t->test_reports_dir);
	if (t->test_reports_dir == NULL)
	{
		ft_putendl_fd("Error! Creating test_reports_dir", STDERR_FILENO);
		free_test_type(t);
		return (EXIT_FAILURE);
	}
	if (!set_ran_seed())
	{
		ft_putendl_fd("Error! Setting seed for random numbers", STDERR_FILENO);
		free_test_type(t);
		return (EXIT_FAILURE);
	}
	ft_printf("A random number: %d\n", rng(INT_MIN, INT_MAX));
	ft_printf("A random number: %d\n", rng(INT_MIN, INT_MAX));
	ft_printf("A random number: %d\n", rng(INT_MIN, INT_MAX));
	ft_printf("A random number: %d\n", rng(INT_MIN, INT_MAX));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	ft_printf("A random number: %d\n", rng(3, 5));
	return (EXIT_SUCCESS);
}
