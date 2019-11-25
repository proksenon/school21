/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iso.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:41:39 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/20 17:24:31 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#define MAX(a, b)(a > b ? a : b)
#define MOD(a)(a < 0 ? -a : a)

void	isometrika(float *x, float *y, int z, t_map *list)
{
	*x = (*x - *y) * cos(list->grad);
	*y = (*x + *y) * sin(list->grad) - z;
}

void	two_d_map(t_map *list)
{
	int		y;
	int		x;

	y = 0;
	while (y < list->height)
	{
		x = 0;
		while (x < list->width)
		{
			list->x = x;
			list->y = y;
			if (x < list->width - 1)
				start_algoritm(x + 1, y, list);
			list->x = x;
			list->y = y;
			if (y < list->height - 1)
				start_algoritm(x, y + 1, list);
			x++;
		}
		y++;
	}
}

void	ret(float *x1, float *y1, t_map *list)
{
	int		z;
	int		z1;
	float	x;
	float	y;

	list->z = list->z_mat[(int)list->y][(int)list->x] * list->hei;
	list->z1 = list->z_mat[(int)*y1][(int)*x1] * list->hei;
	z = list->z;
	z1 = list->z1;
	list->x *= list->zoom;
	*x1 *= list->zoom;
	list->y *= list->zoom;
	*y1 *= list->zoom;
	x = list->x;
	y = list->y;
	isometrika(&x, &y, z, list);
	isometrika(x1, y1, z1, list);
	list->y = y;
	list->x = x;
	list->x += list->key_x;
	*x1 += list->key_x;
	list->y += list->key_y;
	*y1 += list->key_y;
}

void	start_algoritm(float x1, float y1, t_map *list)
{
	float	x_step;
	float	y_step;
	int		max;
	float	x;
	float	y;

	ret(&x1, &y1, list);
	x = list->x;
	y = list->y;
	if (list->z > 0 || list->z1 > 0)
		list->c = list->z == list->z1 ? 0xFFFFFF : 0x8B4513;
	else
		list->c = 0x008000;
	x_step = x1 - x;
	y_step = y1 - y;
	max = MAX(MOD(x_step), MOD(y_step));
	x_step = x_step / max;
	y_step = y_step / max;
	while ((int)(x - x1) || (int)(y - y1))
	{
		mlx_pixel_put(list->mlx_ptr, list->win_ptr, x + 400, y + 300, list->c);
		x = x + x_step;
		y = y + y_step;
	}
}

void	create_algoritm(t_map *list)
{
	list->mlx_ptr = mlx_init();
	list->win_ptr = mlx_new_window(list->mlx_ptr, 1000, 1000, "FDF");
	menu(list);
	two_d_map(list);
	mlx_key_hook(list->win_ptr, deal_key, list);
	mlx_loop(list->mlx_ptr);
}
