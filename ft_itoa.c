#include "libft.h"

char	*ft_itoa(int c)
{
	char	*str;
	int		i;
	int		j;

	i = c;
	j = 0;
	while (i)
	{
		i = i / 10;
		j++;
	}
	str = malloc(j);
	if (c < 0)
	{
		c = c * -1;
		j++;
	}
	while (j--)
	{
		str[j] = c % 10 + 48;
		c = c / 10;
	}
	if (str[0] == 48)
		str[0] = '-';
	return (str);
}
