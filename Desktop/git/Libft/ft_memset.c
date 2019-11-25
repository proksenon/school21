/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:19:28 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/12 21:03:39 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int value, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)destination)[i] = value;
		i++;
	}
	return (destination);
}
