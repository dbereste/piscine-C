/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 13:49:43 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/11 14:21:30 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int ret;
	int i;

	i = 0;
	ret = 4;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (-1);
			if (s1[i] < s2[i])
				return (1);
		}
		i++;
	}
	return (0);
}
