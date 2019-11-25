/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:58:17 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/08 17:58:40 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 10

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("Failed opening");
		else
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
		if (close(fd) == -1 && fd == 3)
			ft_putstr("Failed closing");
	}
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
