/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:06:21 by lluque            #+#    #+#             */
/*   Updated: 2024/08/08 22:00:45 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	print(void *content)
{
	ft_putnbr_fd(*(int *)content, STDOUT_FILENO);
	ft_putendl_fd("", STDOUT_FILENO);
}
