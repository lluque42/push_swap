/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/08/15 00:29:09 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps_stacks	*ps;

	ps = init_ps();
	parse_arguments(ps, argc, argv);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
	if (is_sorted(ps->a, ASCENDING))
		return (free_ps(&ps), EXIT_SUCCESS);
	if (!ps_sort(ps))
		ft_putendl_fd("push_swap: error while sorting", STDERR_FILENO);
	free_ps(&ps);
	return (EXIT_SUCCESS);
}
