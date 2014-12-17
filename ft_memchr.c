/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 02:32:54 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/13 09:52:16 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
