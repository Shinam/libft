/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 04:36:02 by averkenn          #+#    #+#             */
/*   Updated: 2015/01/30 14:35:49 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		c;
	size_t	d;

	c = 0;
	d = 0;
	while (s1[c])
	{
		if (d == n || !s2[d])
			return ((char *)s1 + c);
		else if (!s1[c + d] && s2[d])
			return (0);
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
