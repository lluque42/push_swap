/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:40:11 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 17:32:53 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include "tester.h"

int	execute_ps(t_test *t)
{
	int	fd_out;
	int	pid;

	pid = fork();
	if (pid == IS_CHILD)
	{
		fd_out = open(t->current_instructions_file, O_WRONLY | O_CREAT, 0600);
		dup2(fd_out, STDOUT_FILENO);
		if (execve(t->ps_filename, t->ran_set_strarr, t->envp) == -1)
		{
			close(fd_out);
			return (0);
		}
	}
	if (wait(NULL) == -1)
		return (0);
	return (1);
}
