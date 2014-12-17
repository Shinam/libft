/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 07:22:45 by averkenn          #+#    #+#             */
/*   Updated: 2014/11/11 07:25:12 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *alloc;

	alloc = malloc(size);
	if(!alloc)
		return (0);
	ft_bzero(alloc, size);
	return (alloc);
}
