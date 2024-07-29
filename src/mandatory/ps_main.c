/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 21:29:35 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps_stacks	*ps;

	ps = init_ps();
	parse_arguments(ps, argc, argv);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
	if (!ps_sort(ps))
		ft_putendl_fd("push_swap: error while sorting", STDERR_FILENO);
	if (MAKE_DEBUG_LVL)
		print_stacks(ps);
	free_ps(&ps);
	return (0);
}
