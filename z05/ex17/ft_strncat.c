/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 16:38:39 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 16:58:20 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int nu_of_chars1;
	int aux;
	int nu_of_chars2;

	i = 0;
	nu_of_chars1 = 0;
	nu_of_chars2 = 0;
	while (dest[nu_of_chars1])
		nu_of_chars1++;
	aux = nu_of_chars1;
	while (src[nu_of_chars2])
		nu_of_chars2++;
	while (src[i] && i < nb)
	{
		dest[nu_of_chars1] = src[i];
		i++;
		nu_of_chars1++;
	}
	if (nb > nu_of_chars2)
		dest[aux + nu_of_chars2] = '\0';
	else
		dest[aux + nb] = '\0';
	return (dest);
}
