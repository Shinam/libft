/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:03:44 by averkenn          #+#    #+#             */
/*   Updated: 2015/02/07 05:24:33 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s)
	{
		str = malloc(sizeof(char) * len + 1);
		if (!str)
			return (NULL);
		while (i++ < len)
			str[i] = s[start + i];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
