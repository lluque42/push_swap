/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/02/06 00:50:57 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_utils.h"
#include "ps_lang_interpreter.h"
#include "dlclst_int_utils.h"

int	main(int argc, char **argv)
{
	t_ps_stacks	*ps;

	ps = init_ps();
	parse_arguments(ps, argc, argv);
	if (!ps_lang_interpreter(ps, 0))
		exit_on_error(ps);
	if (is_sorted(ps->a, ASCENDING) && ps->b == NULL)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	free_ps(&ps);
	return (0);
}
