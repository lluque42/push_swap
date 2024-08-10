/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   already_in_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:52:21 by lluque            #+#    #+#             */
/*   Updated: 2024/08/10 23:53:42 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	already_in_array(int* set, int set_size, int new)
{
	int	i;

	i = -1;
	while (++i < set_size)
	{
		if (new == set[i])
			return (0);
	}
	return (1);
}
