/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 17:23:33 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/07 11:25:33 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char counter;

	counter = 'a';
	while (counter <= 'z')
	{
		ft_putchar(counter);
		counter++;
	}
}
