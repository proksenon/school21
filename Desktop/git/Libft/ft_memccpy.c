/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:03:04 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/25 15:36:12 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	unsigned char		*src;

	i = 0;
	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
