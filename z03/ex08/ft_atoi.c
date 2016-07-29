/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 10:27:41 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/08 16:16:56 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

int				ft_atoi(char *str)
{
	int negative;
	int size;
	int i;
	int ten_pwr;
	int result;

	negative = 0;
	if (str[0] == '-')
	{
		negative = 1;
		str += 1;
	}
	size = ft_strlen(str);
	i = size - 1;
	ten_pwr = 1;
	result = 0;
	while (i >= 0)
	{
		result += (str[i] - '0') * ten_pwr;
		i--;
		ten_pwr *= 10;
	}
	if (negative)
		result = -result;
	return (result);
}
