/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 16:05:31 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 16:08:59 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int is_upper;

	i = 0;
	is_upper = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			is_upper = 1;
		else
			is_upper = 0;
		if (is_upper == 0)
			return (0);
		i++;
	}
	return (1);
}
