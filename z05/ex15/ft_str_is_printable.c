/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 16:10:07 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 16:17:38 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int is_print;

	i = 0;
	is_print = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			is_print = 1;
		else
			is_print = 0;
		if (is_print == 0)
			return (0);
		i++;
	}
	return (1);
	return (0);
}
