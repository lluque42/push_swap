/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_test_type.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:57:14 by lluque            #+#    #+#             */
/*   Updated: 2024/08/10 11:10:04 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tester.h"

t_test	*allocate_test_type(void)
{
	t_test *t;

	t = ft_calloc(1, sizeof(t_test));
	return (t);
}
