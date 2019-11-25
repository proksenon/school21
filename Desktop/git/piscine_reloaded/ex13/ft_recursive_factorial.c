/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:36:38 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/03 18:47:12 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb > 0 && nb <= 12)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
	return (result);
}
