/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/02/09 14:43:35 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_lang.h"
#include "main_utils.h"

int	main(int argc, char **argv)
{
	t_ps_stacks	*ps;

	ps = init_ps();
	parse_arguments(ps, argc, argv);
	// Algorithm (push_swap)
	ft_printf("Here we're supposed to sort\n");
	// Algorithm (push_swap)
	if (DEBUG)
		print_stacks(ps);
	free_ps(&ps);
	return (0);
}
