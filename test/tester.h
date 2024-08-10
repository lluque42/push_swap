/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 23:10:49 by lluque            #+#    #+#             */
/*   Updated: 2024/08/10 21:54:50 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file tester.h
 * TODO
*/

#ifndef TESTER_H
# define TESTER_H

/**
 * @struct s_test
 *
 * @brief Base for typedef <b>t_test</b> TODO
 *
 * @details TODO
 *
 * @var s_test::i
 * The ID of the current test.
 *
*/
typedef struct s_test
{
	int		i;
	int		ok_acc;
	int		max_inst_num;
	int		test_num_with_max;
	int		min_inst_num;
	int		test_num_with_min;
	int		inst_num_acc;
	int		off_target;
	double	avg_inst_num;
	int		ran_seed;
	char	*current_instructions_file;
	int		*ran_set;
	char	**ran_set_strarr;
	char	*ps_filename;
	char	*ch_filename;
	int		ran_num;
	int		test_num;
	int		target_inst_num;
	char	*test_reports_dir;
	int		fd_instructions_file;
	int		inst_num;
}	t_test;
/**
 * @typedef t_test
 * Based on the @link s_test @endlink struct.
 */


void	free_test_type(t_test *t);
int		args_validation(int argc, char **argv, t_test *t);
t_test	*allocate_test_type(void);
char*	create_test_report_dir(char *test_reports_dir);
int		set_ran_seed();
int		rng(int min, int max);

#endif
