/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <nclaire@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:41:35 by nclaire           #+#    #+#             */
/*   Updated: 2019/11/20 16:59:58 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		check_int(char *str)
{
	int		i;
	int		len;

	i = -1;
	len = 0;
	while ((str[++i] != '\0' && str[i] >= 48 && str[i] <= 57) || str[i] == '-')
		if (str[i] != '-')
			len++;
	if (str[0] == '-' && len > 11)
		return (0);
	else if (len > 10)
		return (0);
	if (len == 10 && str[0] != '-')
		if (ft_strncmp("2147483647", str, len) < 0)
			return (0);
	if (len == 10 && str[0] == '-')
		if (ft_strncmp("-2147483648", str, len + 1) < 0)
			return (0);
	return (1);
}

int		check_file_2(char *line, int nomer, int flag, int j)
{
	int				i;
	static int		count = 0;

	i = -1;
	while (line[++i] != '\0')
	{
		if ((line[i] < 48 || line[i] > 57) && line[i] != 43
		&& line[i] != 45 && line[i] != ' ')
			return (0);
		if (line[i] == ' ' && flag == 1)
			flag = 0;
		if (line[i] != ' ' && (line[i + 1] == ' ' || line[i + 1] == '\0'))
		{
			flag = 1;
			j++;
		}
	}
	if (nomer == 1)
		count = j;
	if (j == 0 || j != count)
		return (0);
	free(line);
	return (1);
}

int		check_file(char *argv)
{
	int		fd;
	char	*line;
	int		nomer;

	nomer = 0;
	fd = open(argv, O_RDONLY);
	if (fd < 0)
		return (0);
	while (get_next_line(fd, &line) > 0)
	{
		if (!(check_file_2(line, ++nomer, 0, 0)))
		{
			free(line);
			return (0);
		}
	}
	if (nomer == 0 && line[0] == '\0')
		return (0);
	free(line);
	close(fd);
	return (1);
}
