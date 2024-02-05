/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 20:44:12 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include "libft.h"
//#include "dlclst_int_utils.h"
//#include "ps_lang.h"
#include "main_utils.h"

int	main(int argc, char **argv)
{
	t_ps_stacks	*ps;

	ps = init_ps();
	parse_arguments(ps, argc, argv);
	// ...
	// Algorithm (push_swap) or interpreter (checker)
	// ...
	free_ps(&ps);
	return (0);
}
/*
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
	free_ps(&ps);
	return (0);


	ft_putendl_fd("Ahora un pa:", 1);
	pa(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
ft_putendl_fd("", 1);
	
	ft_putendl_fd("Ahora un pb:", 1);
	pb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un pb:", 1);
	pb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un pb:", 1);
	pb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un pb:", 1);
	pb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un pa:", 1);
	pa(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
	
	ft_putendl_fd("Ahora un pa:", 1);
	pa(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un pa:", 1);
	pa(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
	
	ft_putendl_fd("Ahora un pa:", 1);
	pa(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
	
	ft_putendl_fd("Ahora un sa:", 1);
	sa(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
	
	ft_putendl_fd("Ahora un sb:", 1);
	sb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un sa:", 1);
	sa(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un pb:", 1);
	pb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un pb:", 1);
	pb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un pb:", 1);
	pb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);

	ft_putendl_fd("Ahora un ss:", 1);
	ss(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un ra:", 1);
	ra(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un rb:", 1);
	rb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un rr:", 1);
	rr(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un rrr:", 1);
	rrr(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un rra:", 1);
	rra(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	ft_putendl_fd("Ahora un rrb:", 1);
	rrb(ps);
	ft_putendl_fd("El stack a:", 1);
	printa(ps);
	if (is_sorted(ps->a, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->a, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack a esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->a, ASCENDING) != 1 && is_sorted(ps->a, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack a esta desordenado o vacio", 1);
	ft_putendl_fd("El stack b:", 1);
	printb(ps);
	if (is_sorted(ps->b, ASCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO AScendentemente", 1);
	else if (is_sorted(ps->b, DESCENDING) == 1)
		ft_putendl_fd("\t\tEl stack b esta ORDENADO DEScendentemente", 1);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_putendl_fd("\t\tEl stack b esta desordenado o vacio", 1);
	ft_putendl_fd("", 1);
		
	
	
	free_ps(&ps);
	return (0);
}
*/
	/*
	t_dlclst	*lst_a;
	int			*content;
	int			i;

	ft_printf("Lista a >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	lst_a = NULL;
	if (argc == 1)
		exit(1);
	i = 1;
	while (i < argc)
	{
		content = malloc(sizeof (int));
		if (content == NULL)
			free_and_exit(lst_a);
		ft_printf("Insertando al inicio '%s'\n", argv[i]);
		*content = ft_atoi(argv[i]);
		ft_dlclst_insfront(&lst_a, ft_dlclst_new(content));
		ft_printf("Cantidad de elementos en la lista: '%d'\n", ft_dlclst_size(lst_a));
		ft_dlclst_iter(lst_a, print);
		ft_printf("El ultimo elemento es: '%d'\n", *((int *)ft_dlclst_last(lst_a)->content));
		ft_printf("\n");
		i++;
	}
	ft_printf("Borrando el elemento 3\n");
	ft_dlclst_rempos(&lst_a, del, 3);
	ft_printf("Cantidad de elementos en la lista: '%d'\n", ft_dlclst_size(lst_a));
	if (lst_a != NULL)
		ft_dlclst_iter(lst_a, print);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_printf("La lista esta vacia\n");
	ft_printf("Borrando el elemento 0\n");
	ft_dlclst_rempos(&lst_a, del, 0);
	ft_printf("Cantidad de elementos en la lista: '%d'\n", ft_dlclst_size(lst_a));
	if (lst_a != NULL)
		ft_dlclst_iter(lst_a, print);
	else if (is_sorted(ps->b, ASCENDING) != 1 && is_sorted(ps->b, DESCENDING) != 1)
		ft_printf("La lista esta vacia\n");
	
	ft_printf("Borrando la lista\n");
	ft_dlclst_clear(&lst_a, del);
	ft_printf("Cantidad de elementos en la lista borrada '%d'\n", ft_dlclst_size(lst_a));
	return (0);
}
*/
