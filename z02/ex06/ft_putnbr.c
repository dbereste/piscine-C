/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 11:28:08 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/07 17:06:16 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_putchat(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	char nr[10];
	char n;
	char i;

	itoa (nb, nr, 10);
	n = length(nr);
	while (i <= nr)
	{
		ft_putchar(nr[i]);
	}	
}

int main ()
{
	ft_putnbr(56);
	return 0;
}
