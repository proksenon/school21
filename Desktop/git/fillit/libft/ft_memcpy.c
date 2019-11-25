/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:59:42 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/12 22:13:42 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *srcptr, size_t len)
{
	size_t	i;

	i = 0;
	if (destination == (void *)0 && srcptr == (void *)0 && len != 0)
		return (NULL);
	while (i != len)
	{
		((char*)destination)[i] = ((char*)srcptr)[i];
		i++;
	}
	return (destination);
}
