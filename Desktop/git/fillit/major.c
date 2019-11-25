/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   major.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:42:28 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 18:42:34 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tetrino(char **str, int *arr, int i, int j)
{
	g_count++;
	if (g_count > 25)
		return (0);
	arr[g_count] = 0;
	if (j < 3 && i < 3 && str[i + 1][j + 1] == '#')
	{
		if (str[i + 1][j] == '#')
			return (check_tetrino_4_12_13_16_17(str, &arr, i, j));
		else
			return (check_tetrino_1_7_15(str, &arr, i, j));
	}
	else if (j > 0 && i < 3 && str[i + 1][j - 1] == '#')
	{
		if (str[i + 1][j] == '#')
			return (check_tetrino_2_3_6_14(str, &arr, i, j));
	}
	else if (i < 2 && str[i + 1][j] == '#' && str[i + 2][j] == '#')
		return (check_tetrino_5_9_11_18(str, &arr, i, j));
	else if (j < 2 && str[i][j + 1] == '#' && str[i][j + 2] == '#')
		return (check_tetrino_8_10_19(str, &arr, i, j));
	return (0);
}

int		check_arr2(char **str, int **arr, int i, int j)
{
	while (++i < 4)
	{
		j = -1;
		while (str[i][++j] != '\0')
		{
			if (str[i][j] == '#')
				return (check_tetrino(str, *arr, i, j));
		}
	}
	return (0);
}

int		check_arr(char **str, int **arr)
{
	int		i;
	int		j;
	int		count;

	count = 0;
	i = -1;
	while (str[++i] != '\0' && i < 4)
	{
		j = -1;
		while (str[i][++j] != '\0')
		{
			if (str[i][j] == '#')
				count++;
			if ((str[i][j] != '.') && (str[i][j] != '#'))
				return (0);
		}
		if (j != 4)
			return (0);
	}
	if (count != 4)
		return (0);
	return (check_arr2(str, arr, -1, -1));
}

void	start_tetris(int *arr)
{
	int		i;

	g_a = 'A';
	g_k = 0;
	g_clear = 0;
	i = 0;
	g_x = 2;
	while (arr[i] > 0 && arr[i] <= 19)
		i++;
	while (i * 4 > (g_x * g_x))
		g_x++;
	start_tetris_2(arr, i);
}
