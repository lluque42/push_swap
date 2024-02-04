/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:31:09 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 00:31:38 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "dlclst_int_utils.h"

void	free_and_exit(t_dlclst *lst)
{
	ft_dlclst_clear(&lst, del);
}

int		main(int argc, char **argv)
{
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
	else
		ft_printf("La lista esta vacia\n");
	ft_printf("Borrando el elemento 0\n");
	ft_dlclst_rempos(&lst_a, del, 0);
	ft_printf("Cantidad de elementos en la lista: '%d'\n", ft_dlclst_size(lst_a));
	if (lst_a != NULL)
		ft_dlclst_iter(lst_a, print);
	else
		ft_printf("La lista esta vacia\n");
	
	ft_printf("Borrando la lista\n");
	ft_dlclst_clear(&lst_a, del);
	ft_printf("Cantidad de elementos en la lista borrada '%d'\n", ft_dlclst_size(lst_a));
	return (0);
}
