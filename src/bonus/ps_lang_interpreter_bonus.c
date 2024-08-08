/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lang_interpreter_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:51:37 by lluque            #+#    #+#             */
/*   Updated: 2024/08/07 23:45:36 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker_bonus.h"

// Removes possible '\n' at the end of line and compares to a string with a 
// valid instruction name.
static int	match(char *line, char *valid_instruction)
{
	size_t	len;

	len = ft_strlen(line);
	if (len == 0)
		return (0);
	if (line[len - 1] == '\n')
	{
		line[len - 1] = '\0';
		len--;
	}
	if (len != ft_strlen(valid_instruction))
		return (0);
	if (ft_strncmp(line, valid_instruction, len) == 0)
		return (1);
	return (0);
}

/**
 * @brief <b>exec_instruction</b> -- Executes a push-swap instruction on stacks.
 *
 * @param [in, out] ps - Pointer to a t_ps_stacks containing the pair of stacks
 * with valid data.
 *
 * @param [in] instruction - A string with only one instruction name and an
 * optional trailing newline char.
 *
 * @return Non-zero value if a valid instruction was parsed and executed.  
 * Returns 0 if no valid instruction was found.
*/
static int	exec_instruction(t_ps_stacks *ps, char *instruction)
{
	if (match(instruction, "pa"))
		return (pa(ps), 1);
	else if (match(instruction, "pb"))
		return (pb(ps), 1);
	else if (match(instruction, "sa"))
		return (sa(ps), 1);
	else if (match(instruction, "sb"))
		return (sb(ps), 1);
	else if (match(instruction, "ss"))
		return (ss(ps), 1);
	else if (match(instruction, "ra"))
		return (ra(ps), 1);
	else if (match(instruction, "rb"))
		return (rb(ps), 1);
	else if (match(instruction, "rr"))
		return (rr(ps), 1);
	else if (match(instruction, "rra"))
		return (rra(ps), 1);
	else if (match(instruction, "rrb"))
		return (rrb(ps), 1);
	else if (match(instruction, "rrr"))
		return (rrr(ps), 1);
	else
		return (0);
}

int	ps_lang_interpreter(t_ps_stacks *ps, int fd, int debug)
{
	char	*instruction;

	if (debug)
		print_stacks(ps);
	while (1)
	{
		instruction = ft_gnl(fd);
		if (instruction == NULL)
			break ;
		if (!exec_instruction(ps, instruction))
		{
			free(instruction);
			return (0);
		}
		free(instruction);
	}
	free(instruction);
	return (1);
}
