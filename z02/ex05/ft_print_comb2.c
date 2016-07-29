/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 11:27:23 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/07 16:05:51 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nomber1;
	int nomber2;

	nomber1 = 0;
	while (nomber1 < 99)
	{
		nomber2 = nomber1 + 1;
		while (nomber2 <= 99)
		{
			ft_putchar(nomber1 / 10 + 48);
			ft_putchar(nomber1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(nomber2 / 10 + 48);
			ft_putchar(nomber2 % 10 + 48);
			if (nomber1 < 98)
				ft_putchar(',');
			if (nomber2 < 98)
				ft_putchar(' ');
			nomber2++;
		}
		nomber1++;
	}
}
