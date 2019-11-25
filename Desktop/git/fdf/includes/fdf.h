/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:31:20 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/20 17:32:06 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include "mlx.h"
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
# include <stdio.h>

typedef struct	s_map
{
	int			width;
	int			height;
	int			**z_mat;
	int			zoom;
	int			c;
	int			key_x;
	int			key_y;
	float		grad;
	int			z;
	int			z1;
	int			hei;
	float		x;
	float		y;

	void		*mlx_ptr;
	void		*win_ptr;
}				t_map;

void			read_file(t_map	*list, char	*argv);
int				read_width(int fd, char *line);
int				read_height(int fd, char *line);
int				**read_zmatrix(t_map *list, int	fd, char *line);
void			create_zmatrix(int *z_line, char *line);
void			create_algoritm(t_map *list);
void			start_algoritm(float y, float y1, t_map *list);
void			two_d_map(t_map *list);
void			isometrika(float *x, float *y, int z, t_map *list);
int				deal_key(int key, t_map *list);
int				deal_key_2(int key, t_map *list);
void			ret(float *x1, float *y1, t_map *list);
void			menu(t_map *list);
int				check_file_2(char *line, int nomer, int flag, int j);
int				check_file(char *argv);
int				check_int(char	*str);

#endif
