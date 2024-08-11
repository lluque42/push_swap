/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 23:10:49 by lluque            #+#    #+#             */
/*   Updated: 2024/08/11 18:32:24 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file tester.h
 * TODO
*/

#ifndef TESTER_H
# define TESTER_H

/**
 * @def READ_END
 * To be used in the context of pipe() function to better identify the
 * read and write end of a pipe, that is, the index of the int pipefd[] array.
 */
# define READ_END 0

/**
 * @def WRITE_END
 * To be used in the context of pipe() function to better identify the
 * read and write end of a pipe, that is, the index of the int pipefd[] array.
 */
# define WRITE_END 1

/**
 * @def IS_CHILD
 * To be used in the context of fork() function to improve legibility when
 * comparing pid's to determine if proccess is child or parent.
 */
# define IS_CHILD 0

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
	char	*tests_summary_file;
	char	*current_instructions_file;
	char	*current_ran_set_file;
	int		*ran_set;
	char	**ran_set_strarr;
	char	*ps_filename;
	char	*ch_filename;
	char	**envp;
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
int		args_validation(int argc, char **argv, char **envp, t_test *t);
t_test	*allocate_test_type(void);
char	*create_test_report_dir(char *test_reports_dir);
int		set_ran_seed(void);
int		rng(int min, int max);
int		already_in_array(int *set, int set_size, int new);
int		create_ran_set(t_test *t);
int		create_ran_set_strarr(t_test *t);
int		create_file_ran_set(t_test *t);
int		set_current_filenames(t_test *t, int test_number);
int		get_lines_nbr_in_file(char *current_instructions_file);
void	update_tests_stats(t_test *t);
void	set_avg_inst_num(t_test *t);
int		create_test_summary(t_test *t);
int		tests_loop(t_test *t);
int		execute_ps(t_test *t);
int		execute_ch(t_test *t);

#endif
