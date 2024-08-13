/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lines_nbr_in_file.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:46:20 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:26:42 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include "tester.h"

int	get_lines_nbr_in_file(char *current_instructions_file)
{
	int	fd;
	int	number_of_lines;

	fd = open(current_instructions_file, O_RDONLY);
	number_of_lines = 0;
	while (ft_gnl(fd) != NULL)
		number_of_lines++;
	return (number_of_lines);
}
