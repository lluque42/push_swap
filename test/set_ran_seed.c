/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_ran_seed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:34:13 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:28:24 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include "libft.h"
#include "tester.h"

/*
For a good seed, that survives multiple running instances of a program that uses
this function (the same second problem), the process PID affects the choosing
of the seed.
 */
int	set_ran_seed(void)
{
	time_t	time_now_sec;
	pid_t	pid;

	pid = getpid();
	time_now_sec = time(NULL);
	if (time_now_sec == (time_t) -1)
		return (0);
	srand(time_now_sec - pid);
	return (1);
}
