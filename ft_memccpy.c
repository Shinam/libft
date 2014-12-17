/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 03:47:24 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/11 05:50:35 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- && *(char *)src != c)
		*(char *)dst++ = *(char *)src++;
	if (n)
		return (dst + 1);
	return (0);
}
