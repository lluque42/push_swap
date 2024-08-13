/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_test_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 23:09:52 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 00:31:50 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "tester.h"

void	free_test_type(t_test *t)
{
	free(t->ps_filename);
	free(t->ch_filename);
	free(t->tests_summary_file);
	free(t->current_instructions_file);
	free(t->current_ran_set_file);
	free(t->ran_set);
	if (t->ran_set_strarr != NULL)
		ft_free_strarr(t->ran_set_strarr);
	free(t->test_reports_dir);
}
