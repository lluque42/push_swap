/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_before_pa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:13:06 by lluque            #+#    #+#             */
/*   Updated: 2024/08/07 23:55:03 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "push_swap.h"

static void	get_costs_for_b_in_pos(t_ps_stacks *ps,
		int pos,
		t_ps_rotations *rots)
{
	t_dlclst	*current_node;

	current_node = ft_dlclst_last(ps->b);
	while (get_current_pos_in_stack(current_node->content) != pos)
		current_node = current_node->prev;
	rots->cost_a = get_cost_a(current_node->content);
	rots->cost_b = get_cost_b(current_node->content);
}

static void	set_rot_instructions(t_ps_rotations *rots)
{
	int	dual_stack_rots;
	int	decrement;

	dual_stack_rots = ft_abs(rots->cost_a - rots->cost_b);
	decrement = 0;
	if (rots->cost_a > 0 && rots->cost_b > 0)
	{
		rots->rrs = dual_stack_rots;
		decrement = dual_stack_rots;
	}
	if (rots->cost_a < 0 && rots->cost_b < 0)
	{
		rots->rrrs = dual_stack_rots;
		decrement = -1 * dual_stack_rots;
	}
	rots->cost_a -= decrement;
	rots->cost_b -= decrement;
	if (rots->cost_a >= 0)
		rots->ras = rots->cost_a;
	else
		rots->rras = -1 * rots->cost_a;
	if (rots->cost_b >= 0)
		rots->rbs = rots->cost_b;
	else
		rots->rrbs = -1 * rots->cost_b;
}

static void	apply_rot_instructions(t_ps_stacks *ps, t_ps_rotations *rots)
{
	while (rots->rrs-- > 0)
		rr(ps);
	while (rots->rrrs-- > 0)
		rrr(ps);
	while (rots->ras-- > 0)
		ra(ps);
	while (rots->rras-- > 0)
		rra(ps);
	while (rots->rbs-- > 0)
		rb(ps);
	while (rots->rrbs-- > 0)
		rrb(ps);
}

void	rotate_before_pa(t_ps_stacks *ps, int lowest_cost_element_pos)
{
	t_ps_rotations	rots;

	rots.rrs = 0;
	rots.rrrs = 0;
	rots.ras = 0;
	rots.rras = 0;
	rots.rbs = 0;
	rots.rrbs = 0;
	get_costs_for_b_in_pos(ps, lowest_cost_element_pos, &rots);
	set_rot_instructions(&rots);
	apply_rot_instructions(ps, &rots);
}
/*
static void	print_debugging(t_ps_rotations *rots)
{
	if (MAKE_DEBUG_LVL)
	{
		ft_printf("[set_rot_instructions] Rotations to perform:\n");
		ft_printf("\trots->rrs = %d\n", rots->rrs);
		ft_printf("\trots->rrrs = %d\n", rots->rrrs);
		ft_printf("\trots->ras = %d\n", rots->ras);
		ft_printf("\trots->rras = %d\n", rots->rras);
		ft_printf("\trots->rbs = %d\n", rots->rbs);
		ft_printf("\trots->rrbs = %d\n", rots->rrbs);
	}
}

*/
