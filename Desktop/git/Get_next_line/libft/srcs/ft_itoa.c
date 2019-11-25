/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:29:37 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/20 19:52:13 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_len_itoa(int n, int *j)
{
	int			i;

	i = 1;
	if (n >= 0)
	{
		n = -n;
		i = 0;
	}
	*j = 1;
	while (n < -9)
	{
		*j = *j * 10;
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char			*ft_itoa(int n)
{
	int			k;
	int			j;
	char		*str;

	k = 0;
	if (!(str = (char *)malloc(sizeof(*str) * ft_len_itoa(n, &j) + 1)))
		return (NULL);
	if (n < 0)
	{
		str[k] = '-';
		k++;
	}
	else
		n = -n;
	while (j >= 1)
	{
		str[k] = -(n / j % 10) + 48;
		k++;
		j = j / 10;
	}
	str[k] = '\0';
	return (str);
}
