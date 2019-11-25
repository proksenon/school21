/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:19:21 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 18:39:52 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**start_tetris_7(void)
{
	g_stop_tet = 50000;
	return (g_plt);
}

void	start_tetris_2(int *arr, int all)
{
	char	**plot;
	int		i;

	i = -1;
	if (g_stop_tet == 50000)
	{
		if (!(plot = create_plot()))
			return ;
	}
	else
		plot = start_tetris_7();
	start_tetris_3(plot, arr, all);
	g_qw = 0;
	if ((g_k < all) && g_stop_tet == 50000)
	{
		free_plot(plot);
		start_tetris_6(arr, all);
		return ;
	}
	else if (g_stop_tet != 50000)
	{
		start_tetris_2(arr, all);
		return ;
	}
	print_plot(plot, all);
}

int		start_tetris_8(int *arr, char **str, int i)
{
	free_str(str, i);
	return (putst(arr));
}

void	end_tetris(int *arr, int i, char **str)
{
	free_str(str, i);
	start_tetris(arr);
	free(arr);
}

int		noka(int fd, char *line)
{
	int		i;
	int		*arr;
	char	*str[5];

	i = -1;
	if (!(arr = (int *)malloc(sizeof(int) * 26)))
		return (putst(arr));
	while ((get_next_line(fd, &line) > 0) && (++i < 5))
	{
		str[i] = line;
		if ((i == 3) && !(check_arr(str, &arr)))
			return (start_tetris_8(arr, str, i));
		if ((i == 4) && str[i][0] == '\0')
			i = free_str(str, i);
		if ((i == 4) && str[i][0] != '\0')
			return (start_tetris_8(arr, str, i));
	}
	if (i < 3)
	{
		free(line);
		return (start_tetris_8(arr, str, i));
	}
	free(line);
	end_tetris(arr, i, str);
	return (0);
}
