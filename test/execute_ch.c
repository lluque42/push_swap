/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:40:11 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 17:43:04 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include "tester.h"

int	execute_ch(t_test *t)
{
	int	fd_in;
	int	pid;

	pid = fork();
	if (pid == IS_CHILD)
	{
		fd_in = open(t->current_instructions_file, O_RDONLY);
		dup2(fd_in, STDIN_FILENO);
		if (execve(t->ch_filename, t->ran_set_strarr, t->envp) == -1)
		{
			close(fd_in);
			return (0);
		}
	}
	if (wait(NULL) == -1)
		return (0);
	return (1);
}
