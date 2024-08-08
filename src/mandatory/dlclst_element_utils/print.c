/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:06:21 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 21:45:37 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "push_swap.h"

void	print(void *element)
{
	ft_putnbr_fd(((t_element *)element)->value, STDOUT_FILENO);
	ft_putendl_fd("", 1);
}
