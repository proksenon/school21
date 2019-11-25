/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:56:07 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/19 21:26:04 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0') || (str2[i] != '\0'))
	{
		if (str1[i] - str2[i] == 0)
			i++;
		if (str1[i] - str2[i] != 0)
			return (0);
	}
	return (1);
}
