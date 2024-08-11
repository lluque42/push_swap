/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_test_type.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:57:14 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:28:45 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"
#include "tester.h"

t_test	*allocate_test_type(void)
{
	t_test	*t;

	t = ft_calloc(1, sizeof(t_test));
	t->min_inst_num = INT_MAX;
	t->test_num_with_min = -1;
	t->test_num_with_max = -1;
	return (t);
}
