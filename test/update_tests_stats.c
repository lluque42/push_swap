/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_tests_stats.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 09:47:21 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:30:05 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tester.h"

void	update_tests_stats(t_test *t)
{
	if (t->inst_num < t->min_inst_num)
	{
		t->min_inst_num = t->inst_num;
		t->test_num_with_min = t->i;
	}
	if (t->inst_num > t->max_inst_num)
	{
		t->max_inst_num = t->inst_num;
		t->test_num_with_max = t->i;
	}
	if (t->inst_num > t->target_inst_num)
		t->off_target++;
	t->inst_num_acc += t->inst_num;
}
