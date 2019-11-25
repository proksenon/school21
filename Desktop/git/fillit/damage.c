/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   damage.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:43:08 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 18:43:59 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		start_tetris_4(char **plot, int *arr, int all)
{
	int		i;

	i = -1;
	g_kk[g_k][0] = g_i;
	g_kk[g_k][1] = g_j;
	g_k++;
	g_qw++;
	if (g_qw == g_stop_tet)
	{
		g_stop_tet++;
		g_plt = plot;
		return (0);
	}
	if (!(start_tetris_3(plot, arr, all)))
		return (0);
	return (1);
}

int		start_tetris_5(char **plot, int *arr, int all)
{
	if (g_k - 1 < 0)
		return (1);
	g_k--;
	g_clear = 1;
	g_i = g_kk[g_k][0];
	g_j = g_kk[g_k][1];
	check_2(arr[g_k], plot);
	g_j = (g_j == g_x - 1 ? -1 : g_j + 1);
	if (g_j == -1 && g_i != g_x - 1)
		g_i++;
	if (check_2(arr[g_k], plot))
	{
		g_kk[g_k][0] = g_i;
		g_kk[g_k][1] = g_j;
		g_k++;
		start_tetris_3(plot, arr, all);
		return (1);
	}
	return (0);
}

void	start_tetris_6(int *arr, int all)
{
	g_x++;
	g_a = 'A';
	g_k = 0;
	start_tetris_2(arr, all);
}

void	print_plot(char **plot, int all)
{
	int		i;

	i = -1;
	if (g_k == all)
	{
		while (++i < g_x)
		{
			ft_putstr(plot[i]);
			free(plot[i]);
			ft_putchar('\n');
		}
		free(plot);
	}
	else
		ft_putstr("error\n");
}

char	**create_plot(void)
{
	char	**plot;
	int		i;

	i = -1;
	if (!(plot = (char **)malloc(sizeof(*plot) * (g_x))))
		return (NULL);
	while (++i < g_x)
		plot[i] = ft_strsub("......................", 0, g_x);
	return (plot);
}
