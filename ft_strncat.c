/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 03:23:55 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/11 07:18:04 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dst, const char *src, size_t n)
{
	int nb;
	size_t number;

	nb = ft_strlen(dst);
	number = 0;
	while (number < n)
	{
		dst[nb] = src[number];
		nb++;
		number++;
	}
	dst[nb] = '\0';
	return (dst);
}
