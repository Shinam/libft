/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averkenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 11:26:23 by averkenn          #+#    #+#             */
/*   Updated: 2015/02/07 05:23:24 by averkenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	j = 0;
	k = 0;
	str = malloc(sizeof(s) * (ft_strlen(s) + 1));
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				str[k][j++] = s[i++];
			str[k++][j] = '\0';
		}
		else
			i++;
	}
	return (str);
}
