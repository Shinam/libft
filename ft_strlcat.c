/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 23:46:58 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/13 11:35:56 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t sizee[2];

	sizee[0] = ft_strlen(src);
	sizee[1] = ft_strlen(dst);
	if (sizee[1] >= size)
		return (sizee[0] + size);
	while (*dst)
		dst++;
	while (size-- && *src)
		*dst++ = *src++;
	return (sizee[0] + sizee[1]);
}
