/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:55:38 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "libft.h"
#include "tester.h"

static void	exit_on_error(t_test *t, char *err_msg)
{
	ft_putendl_fd(err_msg, STDERR_FILENO);
	free_test_type(t);
	exit(EXIT_FAILURE);
}

int	main(int argc, char **argv, char **envp)
{
	t_test	*t;

	t = allocate_test_type();
	if (t == NULL)
		return (EXIT_FAILURE);
	if (!args_validation(argc, argv, envp, t))
		return (free_test_type(t), EXIT_FAILURE);
	t->test_reports_dir = create_test_report_dir(t->test_reports_dir);
	if (t->test_reports_dir == NULL)
		exit_on_error(t, "Error! Creating test_reports_dir");
	if (!set_ran_seed())
		exit_on_error(t, "Error! Setting seed for random numbers");
	if (!tests_loop(t))
		exit_on_error(t, "Error! While test looping");
	if (!create_test_summary(t))
		exit_on_error(t, "Error! While creating tests summary file");
	free_test_type(t);
	return (EXIT_SUCCESS);
}
