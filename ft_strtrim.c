/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:15:27 by averkenn          #+#    #+#             */
/*   Updated: 2015/02/07 21:39:21 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		len;
	char	*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[start] && ft_isspace(s[start]))
		start++;
	if (start == len)
		return (NULL);
	while (ft_isspace(s[len--]));
	len = len - start;
	str = ft_strsub(s, start, len);
	return (str);
}
