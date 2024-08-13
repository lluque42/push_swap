/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_avg_inst_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 09:47:21 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 09:58:04 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tester.h"

void	set_avg_inst_num(t_test *t)
{
	t->avg_inst_num = t->inst_num_acc / t->ok_acc;
}
