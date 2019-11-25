/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 19:53:02 by nclaire           #+#    #+#             */
/*   Updated: 2019/10/09 19:28:42 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*checkstr(char **line, const int fd, char **str)
{
	char	*pointer;

	pointer = NULL;
	if (str[fd] != NULL)
	{
		if ((pointer = ft_strchr(str[fd], '\n')))
		{
			*pointer = '\0';
			*line = ft_strdup(str[fd]);
			ft_strcpy(str[fd], ++pointer);
		}
		else
		{
			*line = ft_strdup(str[fd]);
			ft_strdel(&str[fd]);
		}
	}
	else
		*line = ft_strnew(1);
	return (pointer);
}

int		get_next_line(const int fd, char **line)
{
	static char		*str[10242];
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				res;
	char			*pointer;

	if (fd < 0 || fd > 10242 || line == NULL || BUFF_SIZE < 1)
		return (-1);
	pointer = checkstr(line, fd, str);
	while (!pointer && (res = read(fd, buf, BUFF_SIZE)))
	{
		if (res < 0)
			return (-1);
		buf[res] = '\0';
		if ((pointer = ft_strchr(buf, '\n')))
		{
			*pointer = '\0';
			str[fd] = ft_strdup(++pointer);
		}
		tmp = *line;
		*line = ft_strjoin(tmp, buf);
		free(tmp);
	}
	return (((res > 0) || ft_strlen(*line) || pointer) ? 1 : 0);
}
