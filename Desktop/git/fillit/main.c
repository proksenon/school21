/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:44:17 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 19:05:26 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		start_tetris_3(char **plot, int *arr, int all)
{
	g_i = -1;
	while (++g_i < g_x)
	{
		g_j = -1;
		while (++g_j < g_x)
		{
			if (g_k == all)
				return (1);
			if (plot[g_i][g_j] == '.')
				if (check_2(arr[g_k], plot))
				{
					start_tetris_4(plot, arr, all);
					return (1);
				}
			if (g_i == g_x - 1 && g_j == g_x - 1)
				if (start_tetris_5(plot, arr, all))
					return (1);
		}
	}
	return (1);
}

void	free_plot(char **plot)
{
	int		i;

	i = g_x - 1;
	while (i >= 0)
		free(plot[i--]);
	free(plot);
}

int		putst(int *arr)
{
	free(arr);
	ft_putstr("error\n");
	return (0);
}

int		free_str(char **str, int i)
{
	while (i >= 0)
		free(str[i--]);
	return (-1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 2)
	{
		line = NULL;
		g_count = -1;
		g_stop_tet = 50000;
		if ((fd = open(argv[1], O_RDONLY)) < 0)
		{
			ft_putstr("error\n");
			return (0);
		}
		noka(fd, line);
		close(fd);
		free(line);
	}
	else
	{
		write(1, "usage: fillit fillit_valid_file", 31);
		write(1, "\n", 1);
	}
	return (0);
}
