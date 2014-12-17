/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 02:29:28 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/11 07:06:42 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*c;
	int		nb;

	c = (char *)malloc(sizeof(char) * ft_strlen(s1));
	nb = 0;
	while (s1[nb] != '\0')
	{
		c[nb] = s1[nb];
		nb++;
	}
	return (c);
}
