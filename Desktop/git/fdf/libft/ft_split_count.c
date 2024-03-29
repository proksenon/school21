/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:31:34 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/18 20:31:35 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_split_count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*s != '\0')
	{
		if (*s == c && i == 1)
			i = 0;
		if (*s != c && i == 0)
		{
			count++;
			i = 1;
		}
		s++;
	}
	return (count);
}
