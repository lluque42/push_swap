/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/02/08 23:09:47 by lluque           ###   ########.fr       */
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
	print_stacks(ps);
	free_ps(&ps);
	return (0);
}
