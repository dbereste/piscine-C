/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 21:09:43 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/07 10:05:31 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char number1;
	char number2;
	char number3;

	number1 = '/';
	while (number1++ <= '7')
	{
		number2 = number1 + 1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				ft_putchar(number1);
				ft_putchar(number2);
				ft_putchar(number3);
				if (number1 < '7')
					ft_putchar(',');
				if (number1 < '7')
					ft_putchar(' ');
				number3++;
			}
			number2++;
		}
	}
}
