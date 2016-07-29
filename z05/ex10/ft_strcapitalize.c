/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:51:39 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/12 19:05:55 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		(str[i - 1] < 'a' || str[i - 1] > 'z') &&
		(str[i - 1] > 'Z' || str[i - 1] < 'A'))
			str[i] -= 32;
		if ((str[i] >= 'A' && str[i] <= 'Z') &&
		((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
		(str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			str[i] += 32;
		i++;
	}
	return (str);
}