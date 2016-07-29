/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:25:35 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/09 18:51:32 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int			ft_is_prime(int n)
{
	int i;
	if ((n == 1) || (n == 0))
		return (0);
	if (n < 0)
	{
		i = -2;
		while (i > n)
		{
			if (n % i == 0)
				return (0);
			i--;
		}
	}
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int					ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (i < nb * 2)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}
