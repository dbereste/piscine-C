/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbereste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 21:08:39 by dbereste          #+#    #+#             */
/*   Updated: 2016/07/14 21:16:44 by dbereste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour > 24)
		return;
	printf ("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 12)
		printf("%d.00 P.M. AND %d.00 P.M.",hour / 2, hour / 2 + 1);
	if (hour <= 12)
		printf("%d.00 A.M. AND %d.00 A.M.",hour, hour + 1);
}	
