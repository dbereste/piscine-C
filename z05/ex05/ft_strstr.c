/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:36:49 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 15:24:43 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int size;
	int z;

	size = 0;
	while (str[size] != '\0')
		size++;
	if (size == 0)
		return (0);
	i = 0;
	z = 0;
	while (str[i])
	{
		while (str[i + z] == to_find[z])
		{
			if (z == size - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
