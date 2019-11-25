/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:03:07 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/08 15:03:33 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	while (min != max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
