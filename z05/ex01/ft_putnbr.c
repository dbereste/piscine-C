/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:11:31 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 10:43:54 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int size;
	int aux;

	size = 1;
	aux = nb;
	while ((aux /= 10) > 0)
		size *= 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	aux = nb;
	while (size != 0)
	{
		ft_putchar((char)(aux / size) + 48);
		aux %= size;
		size = size / 10;
	}
}
