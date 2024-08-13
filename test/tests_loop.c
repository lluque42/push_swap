/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_loop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:20:12 by lluque            #+#    #+#             */
/*   Updated: 2024/08/13 18:06:45 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "tester.h"

static int	execute_test(t_test *t)
{
	if (!execute_ps(t))
		return (ft_putendl_fd("Error! push_swap says ERROR",
				STDERR_FILENO), 0);
	if (!execute_ch(t))
		return (ft_putendl_fd("Error! checker says ERROR or KO",
				STDERR_FILENO), 0);
	t->ok_acc++;
	t->inst_num = get_lines_nbr_in_file(t->current_instructions_file);
	update_tests_stats(t);
	return (1);
}

int	tests_loop(t_test *t)
{
	t->i = -1;
	while (++t->i < t->test_num)
	{
		if (!create_ran_set(t))
			return (ft_putendl_fd("Error! Creating set of random numbers",
					STDERR_FILENO), 0);
		if (!create_ran_set_strarr(t))
			return (ft_putendl_fd("Error! Creating set in string format",
					STDERR_FILENO), 0);
		if (!set_current_filenames(t, t->i))
			return (ft_putendl_fd("Error! Creating setting filenames",
					STDERR_FILENO), 0);
		if (!create_file_ran_set(t))
			return (ft_putendl_fd("Error! Creating numbers set file",
					STDERR_FILENO), 0);
		if (!execute_test(t))
			return (0);
	}
	set_avg_inst_num(t);
	return (1);
}
