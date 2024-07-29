/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:46:28 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 09:20:32 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//prints only the top n elements of stack a (a holds more elements than b)
static void	printa_firstn(t_dlclst **a, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		ft_printf("\t %11i %11i %11i %11i %11i    |\n",
			get_value(*a), get_pos_when_sorted(*a),
			get_current_pos_in_stack(*a), get_cost_a(*a), get_cost_b(*a));
		*a = (*a)->next;
		i++;
	}
}

//prints only the top n elements of stack b (b holds more elements than a)
// leaving a free left column for lack of corresponding elements of stack a
static void	printb_firstn(t_dlclst **b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		ft_printf("\t                           ");
		ft_printf("                                     |");
		ft_printf(" %11i %11i %11i %11i %11i   \n",
			get_value(*b), get_pos_when_sorted(*b),
			get_current_pos_in_stack(*b), get_cost_a(*b), get_cost_b(*b));
		*b = (*b)->next;
		i++;
	}
}

// Prints, side by side, the contents of stack a and stack b from the element
// 0 + offset until the end.
static void	printrest(t_dlclst **a, t_dlclst **b, int n)
{
	int			i;

	i = 0;
	while (i < n)
	{
		ft_printf("\t %11i %11i %11i %11i %11i    |",
			get_value(*a), get_pos_when_sorted(*a),
			get_current_pos_in_stack(*a), get_cost_a(*a), get_cost_b(*a));
		ft_printf(" %11i %11i %11i %11i %11i  \n",
			get_value(*b), get_pos_when_sorted(*b),
			get_current_pos_in_stack(*b), get_cost_a(*b), get_cost_b(*b));
		*a = (*a)->next;
		*b = (*b)->next;
		i++;
	}
}

static void	print_titles(void)
{
	ft_printf("\t-----------------------------");
	ft_printf("STACK A----------------------------|");
	ft_printf("-----------------------------");
	ft_printf("STACK B----------------------------\n");
	ft_printf("\t----VALUE--- -POS_WHEN_S- CURR_POS_STA ");
	ft_printf("---COST A--- ---COST B---|");
	ft_printf("----VALUE--- -POS_WHEN_S- CURR_POS_STA ");
	ft_printf("---COST A--- ---COST B---\n");
}

void	print_stacks(t_ps_stacks *ps)
{
	int			a_is_longest;
	int			diff;
	int			max_length;
	t_dlclst	*a;
	t_dlclst	*b;

	a = ps->a;
	b = ps->b;
	a_is_longest = 1;
	max_length = ft_dlclst_size(ps->a);
	diff = ft_abs(max_length - ft_dlclst_size(ps->b));
	if (ft_dlclst_size(ps->b) > max_length)
	{
		a_is_longest = 0;
		max_length = ft_dlclst_size(ps->b);
	}
	print_titles();
	if (a_is_longest)
		printa_firstn(&a, diff);
	else
		printb_firstn(&b, diff);
	printrest(&a, &b, max_length - diff);
	ft_printf("\t------------------------------------------------------------");
	ft_printf("----|---------------------------------------------------------");
	ft_printf("-------\n");
}
