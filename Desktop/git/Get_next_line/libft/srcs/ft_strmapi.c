/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:23:27 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/19 21:15:18 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	if (!(str = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(j, s[i]);
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
