/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:50:44 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 17:50:47 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_6(int arr, char **plot)
{
	if ((arr == 15 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 2 &&
	plot[g_i][g_j] == '.' && plot[g_i][g_j + 1] == '.' && plot[g_i + 1][g_j
	+ 1] == '.' && plot[g_i][g_j + 2] == '.') || (arr == 15 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 2] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 16 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x - 1 &&
	plot[g_i][g_j] == '.' && plot[g_i + 1][g_j + 1] == '.' && plot[g_i + 1][g_j]
	== '.' && plot[g_i + 2][g_j] == '.') || (arr == 16 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_7(arr, plot));
}

int	check_5(int arr, char **plot)
{
	if ((arr == 10 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 2 &&
	plot[g_i][g_j] == '.' && plot[g_i][g_j + 1] == '.' && plot[g_i + 1][g_j
	+ 2] == '.' && plot[g_i][g_j + 2] == '.') || (arr == 10 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 2] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 2] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 12 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 2 && plot
	[g_i][g_j] == '.' && plot[g_i + 1][g_j + 1] == '.' && plot[g_i + 1][g_j
	+ 2] == '.' && plot[g_i + 1][g_j] == '.') || (arr == 12 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 2] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_6(arr, plot));
}

int	check_4(int arr, char **plot)
{
	if ((arr == 7 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x - 1 && plot[g_i]
	[g_j] == '.' && plot[g_i + 1][g_j + 1] == '.' && plot[g_i + 2][g_j + 1] ==
	'.' && plot[g_i][g_j + 1] == '.') || (arr == 7 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 8 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 2 && plot[g_i]
	[g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i][g_j + 1] == '.'
	&& plot[g_i][g_j + 2] == '.') || (arr == 8 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 2] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_5(arr, plot));
}

int	check_3(int arr, char **plot)
{
	if ((arr == 4 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x - 1 && plot[g_i]
	[g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 1][g_j + 1] == '.'
	&& plot[g_i + 2][g_j + 1] == '.') || (arr == 4 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 5 && g_clear != 1 && g_i < g_x - 2 && g_j < g_x - 1 && plot[g_i]
	[g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 2][g_j + 1] == '.'
	&& plot[g_i + 2][g_j] == '.') || (arr == 5 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 2][g_j] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_4(arr, plot));
}

int	check_2(int arr, char **plot)
{
	if ((arr == 17 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 1 &&
	plot[g_i][g_j] == '.' && plot[g_i + 1][g_j] == '.' && plot[g_i + 1][g_j
	+ 1] == '.' && plot[g_i][g_j + 1] == '.') || (arr == 17 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	if ((arr == 1 && g_clear != 1 && g_i < g_x - 1 && g_j < g_x - 2 && plot[g_i]
	[g_j] == '.' && plot[g_i + 1][g_j + 2] == '.' && plot[g_i + 1][g_j + 1] ==
	'.' && plot[g_i][g_j + 1] == '.') || (arr == 1 && g_clear == 1))
	{
		plot[g_i][g_j] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 2] = (g_clear == 1 ? '.' : g_a);
		plot[g_i + 1][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		plot[g_i][g_j + 1] = (g_clear == 1 ? '.' : g_a);
		g_a = (g_clear == 1 ? g_a - 1 : g_a + 1);
		g_clear = 0;
		return (1);
	}
	return (check_3(arr, plot));
}
