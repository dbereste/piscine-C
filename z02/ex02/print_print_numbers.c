/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_print_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 20:09:45 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/07 11:39:52 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char counter;

	counter = '0';
	while (counter <= '9')
	{
		ft_putchar(counter);
		counter++;
	}
}
