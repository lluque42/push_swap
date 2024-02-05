/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:46:28 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 17:08:15 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "dlclst_int_utils.h"
#include "ps_lang.h"

void	printa(t_ps_stacks *ps)
{
	if (ps->a == NULL)
		ft_putendl_fd("(empty)", 1);
	else
		ft_dlclst_iter(ps->a, print);
}

void	printb(t_ps_stacks *ps)
{
	if (ps->b == NULL)
		ft_putendl_fd("(empty)", 1);
	else
		ft_dlclst_iter(ps->b, print);
}
