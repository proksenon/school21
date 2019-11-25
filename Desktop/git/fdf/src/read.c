/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:41:48 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/20 17:09:41 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		read_height(int fd, char *line)
{
	int		i;

	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		i++;
		free(line);
	}
	free(line);
	return (i);
}

int		read_width(int fd, char *line)
{
	int		count;
	int		flag;
	int		i;

	get_next_line(fd, &line);
	i = 0;
	flag = 0;
	count = 0;
	while (line[i] != '\0')
	{
		if (line[i] == ' ' && flag == 1)
			flag = 0;
		if (line[i] != ' ' && (line[i + 1] == ' ' || line[i + 1] == '\0'))
		{
			flag = 1;
			count++;
		}
		i++;
	}
	free(line);
	return (count);
}

void	create_zmatrix(int *z_line, char *line)
{
	char	**str;
	int		i;

	str = ft_strsplit(line, ' ');
	i = 0;
	while (str[i])
	{
		if (!(check_int(str[i])))
		{
			ft_putstr("error\n");
			free(str[i]);
			exit(0);
		}
		z_line[i] = ft_atoi(str[i]);
		free(str[i]);
		i++;
	}
	free(str);
}

int		**read_zmatrix(t_map *list, int fd, char *line)
{
	int		i;

	i = -1;
	list->z_mat = (int **)malloc(sizeof(int *) * (list->height + 1));
	while (++i < list->height)
		list->z_mat[i] = (int *)malloc(sizeof(int) * (list->width + 1));
	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		create_zmatrix(list->z_mat[i], line);
		free(line);
		i++;
	}
	free(line);
	return (list->z_mat);
}

void	read_file(t_map *list, char *argv)
{
	int		fd;
	char	*line;

	line = NULL;
	fd = open(argv, O_RDONLY);
	list->height = read_height(fd, line);
	close(fd);
	fd = open(argv, O_RDONLY);
	list->width = read_width(fd, line);
	close(fd);
	fd = open(argv, O_RDONLY);
	list->z_mat = read_zmatrix(list, fd, line);
	close(fd);
}
