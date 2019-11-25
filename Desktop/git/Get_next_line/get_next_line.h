/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 19:52:25 by nclaire           #+#    #+#             */
/*   Updated: 2019/10/02 19:52:44 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4

# include <unistd.h>
# include <stdlib.h>
# include "libft/includes/libft.h"

char	*checkstr(char **line, const int fd, char **str);
int		get_next_line(int fd, char **line);

#endif
