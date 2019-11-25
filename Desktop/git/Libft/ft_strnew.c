/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:06:18 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/14 18:20:17 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = malloc(size + 1)))
		return (NULL);
	while (i < (int)size)
	{
		str[i] = 0;
		i++;
	}
	str[i] = 0;
	return (str);
}
