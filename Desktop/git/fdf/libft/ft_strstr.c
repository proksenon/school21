/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:13:56 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/25 16:32:12 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;
	int		good;

	if (!ft_strlen(s2))
		return ((char *)s1);
	i = -1;
	good = 0;
	while (*(s1 + ++i) && !good)
	{
		if (*(s1 + i) == *(s2 + 0))
		{
			j = 0;
			k = i;
			good = 1;
			while (*(s2 + j))
				if (*(s2 + j++) != *(s1 + k++))
					good = 0;
			if (good)
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}
