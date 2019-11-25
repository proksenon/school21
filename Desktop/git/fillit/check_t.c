/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:51:22 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 17:51:25 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_tetrino_4_12_13_16_17(char **str, int **arr, int i, int j)
{
	if (str[i + 2][j + 1] == '#')
		arr[0][g_count] = 4;
	else if (str[i + 1][j + 2] == '#')
		arr[0][g_count] = 12;
	else if (j > 0 && str[i + 1][j - 1] == '#')
		arr[0][g_count] = 13;
	else if (i < 2 && str[i + 2][j] == '#')
		arr[0][g_count] = 16;
	else if (str[i][j + 1] == '#')
		arr[0][g_count] = 17;
	if (arr[0][g_count] == 0)
		return (0);
	return (1);
}

int	check_tetrino_1_7_15(char **str, int **arr, int i, int j)
{
	if (j < 2 && str[i + 1][j + 2] == '#' && str[i][j + 1] == '#')
		arr[0][g_count] = 1;
	else if (i < 2 && str[i][j + 1] == '#' && str[i + 2][j + 1] == '#')
		arr[0][g_count] = 7;
	else if (j < 2 && str[i][j + 1] == '#' && str[i][j + 2] == '#')
		arr[0][g_count] = 15;
	if (arr[0][g_count] == 0)
		return (0);
	return (1);
}

int	check_tetrino_2_3_6_14(char **str, int **arr, int i, int j)
{
	if (i < 2 && str[i + 2][j - 1] == '#')
		arr[0][g_count] = 2;
	else if (j < 3 && str[i][j + 1] == '#')
		arr[0][g_count] = 3;
	else if (j > 1 && str[i + 1][j - 2] == '#')
		arr[0][g_count] = 6;
	else if (i < 2 && str[i + 2][j] == '#')
		arr[0][g_count] = 14;
	if (arr[0][g_count] == 0)
		return (0);
	return (1);
}

int	check_tetrino_5_9_11_18(char **str, int **arr, int i, int j)
{
	if (j < 3 && str[i + 2][j + 1] == '#')
		arr[0][g_count] = 5;
	else if (j > 0 && str[i + 2][j - 1] == '#')
		arr[0][g_count] = 9;
	else if (j < 3 && str[i][j + 1] == '#')
		arr[0][g_count] = 11;
	else if (i == 0 && str[i + 3][j] == '#')
		arr[0][g_count] = 18;
	if (arr[0][g_count] == 0)
		return (0);
	return (1);
}

int	check_tetrino_8_10_19(char **str, int **arr, int i, int j)
{
	if (i < 3 && str[i + 1][j] == '#')
		arr[0][g_count] = 8;
	else if (i < 3 && str[i + 1][j + 2] == '#')
		arr[0][g_count] = 10;
	else if (j == 0 && str[i][j + 3] == '#')
		arr[0][g_count] = 19;
	if (arr[0][g_count] == 0)
		return (0);
	return (1);
}
