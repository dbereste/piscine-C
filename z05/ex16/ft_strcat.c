/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 16:20:29 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 16:36:43 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int nu_of_char1;
	int nu_of_char2;
	int mem;

	i = 0;
	nu_of_char1 = 0;
	nu_of_char2 = 0;
	while (dest[nu_of_char1])
		nu_of_char1++;
	mem = nu_of_char1;
	while (src[nu_of_char2])
		nu_of_char2++;
	while (src[i] != '\0')
	{
		dest[nu_of_char1] = src[i];
		i++;
		nu_of_char1++;
	}
	dest[mem + nu_of_char2] = '\0';
	return (dest);
}
