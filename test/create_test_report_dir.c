/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_test_report_dir.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 23:34:50 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:26:16 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "libft.h"
#include "tester.h"

char	*create_test_report_dir(char *test_reports_dir)
{
	struct stat	st;

	ft_bzero(&st, sizeof (st));
	if (stat(test_reports_dir, &st) == -1)
		mkdir(test_reports_dir, 0700);
	else
		return (NULL);
	return (test_reports_dir);
}
