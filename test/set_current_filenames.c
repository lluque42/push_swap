/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_current_filenames.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:28:04 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:50:58 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tester.h"

static int	tests_summary(t_test *t)
{
	int		dst_size;

	if (t->tests_summary_file == NULL)
	{
		dst_size = ft_strlen(t->test_reports_dir)
			+ ft_strlen("tests_summary") + 2;
		t->tests_summary_file = ft_calloc(dst_size, sizeof (char));
		if (t->tests_summary_file == NULL)
			return (0);
		ft_strlcat(t->tests_summary_file, t->test_reports_dir, dst_size);
		ft_strlcat(t->tests_summary_file, "/tests_summary", dst_size);
	}
	return (1);
}

int	set_current_filenames(t_test *t, int test_number)
{
	int		dst_size;
	char	*test_num_str;

	if (!tests_summary(t))
		return (0);
	test_num_str = ft_itoa(test_number);
	if (test_num_str == NULL)
		return (0);
	dst_size = ft_strlen(t->test_reports_dir)
		+ ft_strlen("instructions_") + ft_strlen(test_num_str) + 2;
	t->current_instructions_file = ft_calloc(dst_size, sizeof (char));
	if (t->current_instructions_file == NULL)
		return (0);
	ft_strlcat(t->current_instructions_file, t->test_reports_dir, dst_size);
	ft_strlcat(t->current_instructions_file, "/instructions_", dst_size);
	ft_strlcat(t->current_instructions_file, test_num_str, dst_size);
	dst_size = ft_strlen(t->test_reports_dir)
		+ ft_strlen("numbers_set_") + ft_strlen(test_num_str) + 2;
	t->current_ran_set_file = ft_calloc(dst_size, sizeof (char));
	if (t->current_ran_set_file == NULL)
		return (0);
	ft_strlcat(t->current_ran_set_file, t->test_reports_dir, dst_size);
	ft_strlcat(t->current_ran_set_file, "/numbers_set_", dst_size);
	ft_strlcat(t->current_ran_set_file, test_num_str, dst_size);
	return (1);
}
