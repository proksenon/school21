/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:52:14 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/14 15:06:03 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s1;
	char	*s2;
	size_t	len;

	s1 = (char *)ft_memchr(dst, '\0', size);
	if (s1 == NULL)
		return (size + ft_strlen(src));
	s2 = (char *)src;
	len = (size_t)(s1 - dst) + ft_strlen(s2);
	while ((size_t)(s1 - dst) < size - 1 && *s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (len);
}
