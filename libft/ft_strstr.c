/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 03:57:19 by averkenn          #+#    #+#             */
/*   Updated: 2015/01/28 23:30:37 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int c;
	int d;

	c = 0;
	d = 0;
	while (s1[c])
	{
		if (!s1[c + d] && s2[d])
			return (0);
		else if (!s2[d])
			return ((char *)s1 + c);
		else if (s1[c + d] == s2[d])
			d++;
		else
		{
			d = 0;
			c++;
		}
	}
	return (0);
}
