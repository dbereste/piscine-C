/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 13:12:57 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/10 13:13:02 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_putchar(char c);

static	void		ft_put_ac(int i, int j, int x, int y)
{
	if ((i == 0) && (j == 0))
		ft_putchar('o');
	else if ((i == y) && (j == 0))
		ft_putchar('o');
	else if ((i == 0) && (j == x))
		ft_putchar('o');
	else if ((j == x) && (i == y))
		ft_putchar('o');
}

static	void		ft_put_b(int i, int j, int x, int y)
{
	if ((i == 0 && j > 0 && j < x) || (i == y && j > 0 && j < x))
		ft_putchar('-');
	else if ((i > 0 && i < y && j == 0) || (i > 0 && i < y && j == x))
	{
		ft_putchar('|');
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
