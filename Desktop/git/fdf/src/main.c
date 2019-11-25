/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:41:45 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/20 16:41:46 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_map	*list;

	if (argc == 2)
	{
		list = (t_map *)malloc(sizeof(t_map));
		list->grad = 0.8;
		list->hei = 2;
		list->zoom = 7;
		list->key_y = 1;
		list->key_x = 1;
		if (!(check_file(argv[1])))
		{
			ft_putstr("error\n");
			free(list);
			return (0);
		}
		read_file(list, argv[1]);
		create_algoritm(list);
	}
	else
		write(1, "usage: fdf fdf_valid_file\n", 27);
	return (0);
}
