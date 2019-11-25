/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:47:14 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/20 22:47:19 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = (str[i] == '-') ? 1 : 0;
	i = (str[i] == '-') ? (i + 1) : i;
	if ((str[i] == '-' || str[i] == '+') &&
	!(str[i - 1] == '-' || str[i - 1] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (i >= 19 && sign == 0)
			return (-1);
		else if (i >= 20 && sign == 1)
			return (0);
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (sign ? -nb : nb);
}
