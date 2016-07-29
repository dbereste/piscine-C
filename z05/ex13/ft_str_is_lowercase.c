/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:56:42 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 16:02:05 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int is_lower;

	i = 0;
	is_lower = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			is_lower = 1;
		else
			is_lower = 0;
		if (is_lower == 0)
			return (0);
		i++;
	}
	return (1);
}
