/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <averkenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 13:58:41 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/22 17:42:01 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int nbr;
	int size;
	int l;

	nbr = 0;
	l = 0;
	size = 0;
	while (str[l] && l >= 0)
	{
		if (str[l] >= 48 && str[l] <= 57)
			nbr = nbr * 10 + (str[l] - 48);
		else if (ft_isspace(str[l]) && nbr == 0)
			nbr = nbr;
		else if (((str[l] == '+' || str[l] == '-') && size++ < 1) && nbr == 0)
		{
			if (str[l] == '-')
				size = 2;
		}
		else
			l = -2;
		l++;
	}
	if (size == 2)
		nbr = nbr * -1;
	return (nbr);
}
