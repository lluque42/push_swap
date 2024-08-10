/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 23:01:31 by lluque            #+#    #+#             */
/*   Updated: 2024/08/09 23:46:52 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "tester.h"

static int	exit_on_error(t_test *t)
{
	ft_putendl_fd("Error! Usage:", STDERR_FILENO);
	ft_putstr_fd("\t tester ps_filename ch_filename ran_num ", STDERR_FILENO);
	ft_putstr_fd("test_num target_inst_num ", STDERR_FILENO);
	ft_putendl_fd("test_reports_dir", STDERR_FILENO);
	free_test_type(t);
	return (0);
}

int	args_validation(int argc, char **argv, t_test *t)
{
	if (argc != 7)
		return (exit_on_error(t));
	t->ps_filename = ft_strdup(argv[1]);
	t->ch_filename = ft_strdup(argv[2]);
	t->ran_num = ft_atoi(argv[3]);
	t->test_num = ft_atoi(argv[4]);
	t->target_inst_num = ft_atoi(argv[5]);
	t->test_reports_dir = ft_strdup(argv[6]);
	if (t->ps_filename == NULL
			|| t->ch_filename == NULL
			|| t->test_reports_dir == NULL
			|| t->ran_num <= 0
			|| t->test_num <= 0
			|| t->target_inst_num <= 0)
		return (exit_on_error(t));
	return (1);
}
