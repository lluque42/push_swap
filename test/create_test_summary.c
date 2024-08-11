/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_test_summary.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:14:53 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:38:25 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"
#include "tester.h"

static void	test_description(t_test *t, int fd)
{
	ft_putstr_fd("Number of test performed: ", fd);
	ft_putnbr_fd(t->test_num, fd);
	ft_putendl_fd("", fd);
	ft_putstr_fd("Number of pseudo-random numbers for each test: ", fd);
	ft_putnbr_fd(t->ran_num, fd);
	ft_putendl_fd("", fd);
	ft_putstr_fd("Desired target of number of instructions needed to sort < ",
		fd);
	ft_putnbr_fd(t->target_inst_num, fd);
	ft_putendl_fd("", fd);
	ft_putendl_fd("Results:", fd);
}

static void	test_target_avg(t_test *t, int fd)
{
	ft_putstr_fd("\tNumber of tests OK: ", fd);
	ft_putnbr_fd(t->ok_acc, fd);
	ft_putendl_fd("", fd);
	ft_putstr_fd("\tA total of ", fd);
	ft_putnbr_fd(t->off_target, fd);
	ft_putstr_fd(" tests required equal or greater number of ", fd);
	ft_putstr_fd("instructions to sort than the desired target of ", fd);
	ft_putnbr_fd(t->target_inst_num, fd);
	ft_putendl_fd("", fd);
	ft_putstr_fd("\tThe average number of instructions to sort for OK ", fd);
	ft_putstr_fd("tests was: ", fd);
	ft_putnbr_fd(t->avg_inst_num, fd);
	ft_putendl_fd("", fd);
}

static void	test_best_worse(t_test *t, int fd)
{
	ft_putstr_fd("\tThe test ", fd);
	ft_putnbr_fd(t->test_num_with_min, fd);
	ft_putstr_fd(" was the best with ", fd);
	ft_putnbr_fd(t->min_inst_num, fd);
	ft_putendl_fd(" instructions", fd);
	ft_putstr_fd("\tThe test ", fd);
	ft_putnbr_fd(t->test_num_with_max, fd);
	ft_putstr_fd(" was the worse with ", fd);
	ft_putnbr_fd(t->max_inst_num, fd);
	ft_putendl_fd(" instructions", fd);
}

int	create_test_summary(t_test *t)
{
	int		fd;

	fd = open(t->tests_summary_file, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (0);
	test_description(t, fd);
	test_target_avg(t, fd);
	test_best_worse(t, fd);
	if (close(fd) == -1)
		return (0);
	return (1);
}
