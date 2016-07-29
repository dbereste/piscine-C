/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 13:15:33 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/10 13:17:16 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_putchar(char c);

static	void		ft_put_ac(int i, int j, int x, int y)
{
	if ((i == 0) && (j == 0))
		ft_putchar('A');
	else if ((i == y) && (j == 0))
		ft_putchar('C');
	else if ((i == 0) && (j == x))
		ft_putchar('A');
	else if ((j == x) && (i == y))
		ft_putchar('C');
}

static	void		ft_put_b(int i, int j, int x, int y)
{
	if ((i == 0 && j > 0 && j < x) || (i == y && j > 0 && j < x))
		ft_putchar('B');
	else if ((i > 0 && i < y && j == 0) || (i > 0 && i < y && j == x))
	{
		ft_putchar('B');
	}
}

void				colle(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x == 0 || y == 0)
		return ;
	x--;
	y--;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_put_ac(i, j, x, y);
			ft_put_b(i, j, x, y);
			if (i > 0 && j > 0 && i != y)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
