/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rng.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:31:48 by lluque            #+#    #+#             */
/*   Updated: 2024/08/10 23:40:16 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include "libft.h"

// rand() returns an integer between 0 and RAND_MAX, inclusive
int rng(int min, int max)
{
    int		random_num;
	long	delta_in;
	long	delta_out;
	long	result;
	double	m;

	random_num = rand();
	delta_out = (long)max - (long)min;
	delta_in = (long)RAND_MAX;
	m = (double)delta_out / (double)delta_in;
	result = round((m * (double)random_num) + (double)min); // + 1L;
    return (result);
}
//printf("[rng] LONG_MIN = %ld\n", LONG_MIN);
//printf("[rng] LONG_MAX = %ld\n", LONG_MAX);
//printf("[rng] INT_MIN = %d\n", INT_MIN);
//printf("[rng] INT_MAX = %d\n", INT_MAX);
//printf("[rng] INT_MAX - INT_MIN= %ld\n", (long)INT_MAX - (long)INT_MIN);
//printf("[rng] RAND_MAX = %d\n", RAND_MAX);
//printf("[rng] delta_out = %ld\n", delta_out);
//printf("[rng] delta_in = %ld\n", delta_in);
//result = (m * (double)0) + (double)min; // + 1L;
//printf("[rng] result for min_in = %ld\n", result);
//result = (m * (double)RAND_MAX) + (double)min; // + 1L;
//printf("[rng] result for max_in = %ld\n", result);
//printf("[rng] random_num = %d\n", random_num);
