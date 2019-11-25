/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:41:42 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/20 17:22:29 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	menu(t_map *list)
{
	mlx_string_put(list->mlx_ptr, list->win_ptr,
	700, 20, 0xe80c0c, "How to use:");
	mlx_string_put(list->mlx_ptr, list->win_ptr,
	700, 35, 0xe80c0c, "MOVE: key arrow");
	mlx_string_put(list->mlx_ptr, list->win_ptr,
	700, 50, 0xe80c0c, "ZOOM: Z(+) and X(-)");
	mlx_string_put(list->mlx_ptr, list->win_ptr,
	700, 65, 0xe80c0c, "ISO_Rotate: A(+) and S(-)");
	mlx_string_put(list->mlx_ptr, list->win_ptr,
	700, 80, 0xe80c0c, "Z_coordinate: Q(+) and W(-)");
}

int		deal_key(int key, t_map *list)
{
	if (key >= 123 && key <= 126)
	{
		if (key == 126)
			list->key_y -= 20;
		if (key == 125)
			list->key_y += 20;
		if (key == 123)
			list->key_x -= 20;
		if (key == 124)
			list->key_x += 20;
		two_d_map(list);
		mlx_clear_window(list->mlx_ptr, list->win_ptr);
	}
	if (key == 6 || key == 7)
	{
		if (key == 6 && list->zoom < 150)
			list->zoom += 2;
		if (key == 7 && list->zoom > 6)
			list->zoom -= 2;
		two_d_map(list);
		mlx_clear_window(list->mlx_ptr, list->win_ptr);
	}
	deal_key_2(key, list);
	return (0);
}

int		deal_key_2(int key, t_map *list)
{
	if (key == 0 || key == 1)
	{
		if (key == 0)
			list->grad += 0.1;
		if (key == 1)
			list->grad -= 0.1;
		two_d_map(list);
		mlx_clear_window(list->mlx_ptr, list->win_ptr);
	}
	if (key == 53)
		exit(1);
	if (key == 12 || key == 13)
	{
		if (key == 12 && list->hei < 150)
			list->hei += 2;
		if (key == 13 && list->hei > -150)
			list->hei -= 2;
		two_d_map(list);
		mlx_clear_window(list->mlx_ptr, list->win_ptr);
	}
	menu(list);
	return (0);
}
