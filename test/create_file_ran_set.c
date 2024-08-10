/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_file_ran_set.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:14:53 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 01:21:52 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include "tester.h"

int	create_file_ran_set(t_test *t)
{
	int		fd;
	char	**temp_strarr;

	fd = open(t->current_ran_set_file, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (0);
	temp_strarr = t->ran_set_strarr;
	while (*temp_strarr != NULL)
	{
		write(fd, *temp_strarr, ft_strlen(*temp_strarr));
		write(fd, " ", 1);
		temp_strarr++;
	}
	if (close(fd) == -1)
		return (0);
	return (1);
}
