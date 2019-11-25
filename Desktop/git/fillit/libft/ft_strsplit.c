/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:03:15 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/20 20:26:23 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	if ((s == NULL) || !(str = (char **)malloc(sizeof(*str)
					* ft_split_count(s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		i = (s[i] == '\0') ? -5 : (int)ft_strsplit_len(s, c, j);
		if (i == -5)
			break ;
		str[k] = ft_strsub(s, j, (size_t)(i - j));
		if (str[k] == NULL)
			return (NULL);
		k++;
	}
	str[k] = NULL;
	return (str);
}
