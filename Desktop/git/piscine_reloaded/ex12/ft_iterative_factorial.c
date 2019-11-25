/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 17:38:14 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/03 18:35:56 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb != 0)
		{
			result = result * nb;
			nb--;
		}
	}
	else
		return (0);
	return (result);
}
