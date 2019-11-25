/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclaire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:50:05 by nclaire           #+#    #+#             */
/*   Updated: 2019/09/08 17:15:35 by nclaire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_param(int argc, char **argv);
void	ft_order(int i, int j, int argc, char **argv);
void	ft_sort(int *order, char **argv, int argc);

void	ft_print_param(int argc, char **argv)
{
	int j;

	j = 0;
	while (argv[argc + 1][j] != '\0')
	{
		ft_putchar(argv[argc + 1][j]);
		j++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] == 0)
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_order(int i, int j, int argc, char **argv)
{
	int order[argc - 1];
	int k;

	i = -1;
	while (++i < argc - 1)
		order[i] = 0;
	i = 1;
	while (i != argc)
	{
		j = 1;
		k = 0;
		while (j != argc)
		{
			if (ft_strcmp(argv[i], argv[j]) <= 0)
				k++;
			j++;
		}
		order[i - 1] = k - 1;
		i++;
	}
	ft_sort(order, argv, argc);
}

void	ft_sort(int *order, char **argv, int argc)
{
	int max;
	int i;
	int j;

	i = 0;
	max = 0;
	while (i != argc - 1)
	{
		if (order[i] > max)
			max = order[i];
		i++;
	}
	while (max >= 0)
	{
		j = 0;
		while (j != argc - 1)
		{
			if (order[j] == max)
				ft_print_param(j, argv);
			j++;
		}
		max--;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc > 1)
	{
		ft_order(i, j, argc, argv);
	}
	return (0);
}
