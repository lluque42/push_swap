/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:49:39 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 23:53:59 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// For now it is assumed that the elements to be sorted are a set of consecutive
// integers.
#include "libft.h"
#include "push_swap.h"

void	ps_sort(t_ps_stacks *ps)
{
	int	total_size;
	int	threshold;
	int	advance_b;

	advance_b = 0;
	total_size = ft_dlclst_size(ps->a);
	threshold = total_size / 2;
	ft_printf("totsize = %d, threshold = %d\n", total_size, threshold);
	ft_printf("%d ", (top(A, ps) != NULL)? *top(A, ps): 999);
	ft_printf("%d ", (top_1(A, ps) != NULL)? *top_1(A, ps): 999);
	ft_printf("%d ", (bot(A, ps) != NULL)? *bot(A, ps): 999);
	ft_printf("%d\n", (bot_1(A, ps) != NULL)? *bot_1(A, ps): 999);
	// Hasta que a quede ordenado y b vacío
	while (!is_sorted(ps->a, ASCENDING) || ft_dlclst_size(ps->b) != 0)
	{
		if (MAKE_DEBUG_LVL)
		{
			print_stacks(ps);
			ft_printf("Press enter to continue\n");
			ft_gnl(0);
		}
		// Primera etapa: Que a quede ordenado ascendentemente y b se puebla.
		// Se va ordenando a mientras se pasan elementos a b y se aprovecha de
		// hacer un orden descendente preliminar de b cuando coincidan las
		// necesidades de instrucciones que afecten a la vez a ambos stacks
		while (!is_sorted(ps->a, ASCENDING))					// Esta condición podría optimizarse con un is_sorted_circularly, y luego ver si se aprovechan rotaciones al terminar de ordenar B para poner el head de A en su lugar
		{
			ft_printf("While A isn't sorted\n");
			if (top(A, ps) == NULL)
			{
				ft_printf("No hay top(A)!!!!!!!!!!!!!!!!\n");
				continue ;
			}
			ft_printf("MAKE_DEBUG_LVL 1\n");
			if (*top(A, ps) < threshold)
			{
				// Si top de A está por debajo del threshold se pasa a B
				pb(ps);
				// En este caso no es necesario avanzar en A
				ft_printf("MAKE_DEBUG_LVL 2\n");
				continue ;
			}
			ft_printf("MAKE_DEBUG_LVL 3\n");
			// Si se cae aquí, no se pasó nada a B y por tanto hay que ver
			// si hay que swapear y luego avanzar.
			// Hay que ver si swap de A
			if (top(A, ps) == NULL || top_1(A, ps) == NULL)
				continue ;
			ft_printf("MAKE_DEBUG_LVL 4\n");
			if (*top(A, ps) > *top_1(A, ps))
			{
				ft_printf("MAKE_DEBUG_LVL 5\n");
				// En este punto, A necesita swap, se ve si B también
				if (top(B, ps) != NULL && top_1(B, ps) != NULL)
				{
					if (*top(B, ps) < *top_1(B, ps))
					{
						// B también necesita swap
						ss(ps);
						advance_b = 1;
						continue ;
					}
				}
				// Solo se necesita swapear A.
				sa(ps);
				continue ;
				//advance_a = 1;
			} //Fin de hubo que swapear A y tal vez también B
			// Si no hubo que swapear A, hay que avanzar A
			// pero se aprovecha a ver si también hay que avanzar B
			//if (advance_a && advance_b)
			if (advance_b)
			{
				rr(ps);
				//advance_a = 0;
				advance_b = 0;
				continue ;
			}
			// Solo se avanza A
			ra(ps);
			//advance_a = 0;
		}// Fin de A sigue desordenada
		// Una vez ordenado a, se termina de ordenar b
		while (!is_sorted(ps->b, DESCENDING))
		{
			ft_printf("While B isn't sorted\n");
			if (top(B, ps) == NULL || top_1(B, ps) == NULL)
				continue ;
			if (*top(B, ps) < *top_1(B, ps))
			{
				// B necesita swap
				sb(ps);
				rb(ps);								/// Aquí es donde, si se hace un is_sorted_circulary se podría aprovechar de rotar también A.
			}			
		}
		// Mientras no se vacíe b
		while (ft_dlclst_size(ps->b) != 0)
		{
			ft_printf("While B isn't empty\n");
			pa(ps);
		}
	}
}
