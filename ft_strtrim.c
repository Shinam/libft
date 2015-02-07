/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:15:27 by averkenn          #+#    #+#             */
/*   Updated: 2015/02/07 05:23:59 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	while (ft_isspace(s[i]))
		i++;
	while (s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	while (ft_isspace(s[i]))
	{
		str[j] = '\0';
		i--;
		j--;
	}
	return (str);
}
