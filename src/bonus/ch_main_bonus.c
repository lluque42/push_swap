/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_main_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:58:43 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "checker_bonus.h"

int	main(int argc, char **argv)
{
	t_ps_stacks	*ps;

	ps = init_ps();
	parse_arguments(ps, argc, argv);
	if (!ps_lang_interpreter(ps, STDIN_FILENO, MAKE_DEBUG_LVL))
		exit_on_error(ps);
	if (is_sorted(ps->a, ASCENDING) && ps->b == NULL)
		ft_putendl_fd("OK", STDOUT_FILENO);
	else
		ft_putendl_fd("KO", STDOUT_FILENO);
	free_ps(&ps);
	return (EXIT_SUCCESS);
}
