/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:47:41 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/05 18:47:46 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"

char	g_a;
int		g_clear;
int		g_k;
int		g_x;
int		g_count;
int		g_kk[30][2];
int		g_qw;
int		g_i;
int		g_j;
int		g_stop_tet;
char	**g_plt;

int		check_11(int arr, char **plot);
int		check_10(int arr, char **plot);
int		check_9(int arr, char **plot);
int		check_8(int arr, char **plot);
int		check_7(int arr, char **plot);
int		check_6(int arr, char **plot);
int		check_5(int arr, char **plot);
int		check_4(int arr, char **plot);
int		check_3(int arr, char **plot);
int		check_2(int arr, char **plot);
int		check_tetrino_4_12_13_16_17(char **str, int **arr, int i, int j);
int		check_tetrino_1_7_15(char **str, int **arr, int i, int j);
int		check_tetrino_2_3_6_14(char **str, int **arr, int i, int j);
int		check_tetrino_5_9_11_18(char **str, int **arr, int i, int j);
int		check_tetrino_8_10_19(char **str, int **arr, int i, int j);
int		check_tetrino(char **str, int *arr, int i, int j);
int		check_arr2(char **str, int **arr, int i, int j);
int		check_arr(char **str, int **arr);
void	start_tetris(int *arr);
void	start_tetris_2(int *arr, int all);
int		start_tetris_3(char **plot, int *arr, int all);
char	**create_plot(void);
int		noka(int fd, char *line);
int		putst(int *arr);
int		free_str(char **str, int i);
void	free_plot(char **plot);
int		start_tetris_4(char **plot, int *arr, int all);
int		start_tetris_5(char **plot, int *arr, int all);
void	start_tetris_6(int *arr, int all);
void	print_plot(char **plot, int all);
char	**start_tetris_7(void);
int		start_tetris_8(int *arr, char **str, int i);
void	end_tetris(int *arr, int i, char **str);

#endif
