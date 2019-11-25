/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:50:26 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 17:50:30 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_11(int arr, char **plot)
{
	if ((arr == 14 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x && g_j > 0
	&& plot[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 1][g_j
	- 1] == '.' && plot[g_i + 2][g_j] == '.') || (arr == 14 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j - 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (0);
}

int	check_10(int arr, char **plot)
{
	if ((arr == 11 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x - 1 && plot
	[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 2][g_j] ==
	'.' && plot[g_i][g_j + 1] == '.') || (arr == 11 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 13 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 1 && g_j > 0
	&& plot[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 1][g_j -
	1] == '.' && plot[g_i + 1][g_j + 1] == '.') || (arr == 13 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j - 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_11(arr, plot));
}

int	check_9(int arr, char **plot)
{
	if ((arr == 6 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x && g_j > 1 &&
	plot[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 1][g_j -
	1] == '.' && plot[g_i + 1][g_j - 2] == '.') || (arr == 6 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j - 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j - 2] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 9 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x && g_j > 0 &&
	plot[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 2][g_j]
	== '.' && plot[g_i + 2][g_j - 1] == '.') || (arr == 9 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j - 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_10(arr, plot));
}

int	check_8(int arr, char **plot)
{
	if ((arr == 2 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x && g_j > 0 &&
	plot[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 1][g_j - 1]
	== '.' && plot[g_i + 2][g_j - 1] == '.') || (arr == 2 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j - 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j - 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 3 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 1 && g_j > 0
	&& plot[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 1][g_j
	- 1] == '.' && plot[g_i][g_j + 1] == '.') || (arr == 3 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j - 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_9(arr, plot));
}

int	check_7(int arr, char **plot)
{
	if ((arr == 18 && g_clear != 1 && g_i + 3 < g_x && plot[g_i][g_j] == '.' &&
	plot[g_i + 1][g_j] == '.' && plot[g_i + 2][g_j] == '.' && plot[g_i + 3]
	[g_j] == '.') || (arr == 18 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 3][g_j] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 19 && g_clear != 1 && g_j + 3 < g_x && plot[g_i][g_j + 1] == '.'
	&& plot[g_i][g_j + 2] == '.' && plot[g_i][g_j + 3] == '.' && plot[g_i]
	[g_j] == '.') || (arr == 19 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 2] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 3] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_8(arr, plot));
}
