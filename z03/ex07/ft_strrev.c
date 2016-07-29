/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:28:14 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/08 13:37:45 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*str_rev;
	int		i;
	int		lenght;

	str_rev = "";
	i = 0;
	while (str[i] != '\0')
		i++;
	lenght = i - 1;
	i = 0;
	while (str[i] != '\0')
	{
		str_rev[lenght] = str[i];
		i++;
		lenght--;
	}
	return (str_rev);
}
