/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 11:28:17 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/13 11:45:48 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int n;

	n = argc - 1;
	i = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n - 1)
		{
			if(argv[j - 1] > argv[j])
			{
				argv[0] = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = argv[0];
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
	return (0);
}
