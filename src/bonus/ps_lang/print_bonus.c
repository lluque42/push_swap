/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:46:28 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 00:05:01 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

//prints only the top n elements of stack a (a holds more elements than b)
static void	printa_firstn(t_ps_stacks *ps, unsigned int n)
{
	unsigned int	i;
	t_dlclst		*a;

	i = 0;
	a = ps->a;
	while (i < n)
	{
		ft_printf("\t %11i   \n", *(int *)ft_dlclst_peek_pos(a, i));
		i++;
	}
}

//prints only the top n elements of stack b (b holds more elements than a)
// leaving a free left column for lack of corresponding elements of stack a
static void	printb_firstn(t_ps_stacks *ps, unsigned int n)
{
	unsigned int	i;
	t_dlclst		*b;

	i = 0;
	b = ps->b;
	while (i < n)
	{
		ft_printf("\t %11s   %-11d\n", "", *(int *)ft_dlclst_peek_pos(b, i));
		i++;
	}
}

// Prints, side by side, the contents of stack a and stack b from the element
// 0 + offset until the end.
static void	printrest(t_ps_stacks *ps, int a_is_longest, int diff, int max_len)
{
	int			i;
	t_dlclst	*a;
	t_dlclst	*b;

	i = diff;
	a = ps->a;
	b = ps->b;
	while (i < max_len)
	{
		if (a_is_longest)
		{
			ft_printf("\t %11i   ", *(int *)ft_dlclst_peek_pos(a, i));
			ft_printf("\t%-11i\n", *(int *)ft_dlclst_peek_pos(b, i - diff));
		}
		else
		{
			ft_printf("\t %11i   ", *(int *)ft_dlclst_peek_pos(a, i - diff));
			ft_printf("\t%-11i\n", *(int *)ft_dlclst_peek_pos(b, i));
		}
		i++;
	}
}

void	print_stacks(t_ps_stacks *ps)
{
	int	a_is_longest;
	int	diff;
	int	max_length;

	a_is_longest = 1;
	max_length = ft_dlclst_size(ps->a);
	diff = ft_abs(max_length - ft_dlclst_size(ps->b));
	if (ft_dlclst_size(ps->b) > max_length)
	{
		a_is_longest = 0;
		max_length = ft_dlclst_size(ps->b);
	}
	ft_printf("\t---STACK A--- ---STACK B---\n");
	if (a_is_longest)
		printa_firstn(ps, diff);
	else
		printb_firstn(ps, diff);
	printrest(ps, a_is_longest, diff, max_length);
	ft_printf("\t---------------------------\n");
}
