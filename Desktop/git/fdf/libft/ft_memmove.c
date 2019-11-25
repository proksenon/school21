/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:53:58 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/25 15:44:44 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	int		i;

	if (destination == (void *)0 && source == (void *)0)
		return (NULL);
	if (((char*)destination) > ((char *)source))
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((char*)destination)[i] = ((char *)source)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i != (int)n)
		{
			((char*)destination)[i] = ((char *)source)[i];
			i++;
		}
	}
	return (destination);
}
