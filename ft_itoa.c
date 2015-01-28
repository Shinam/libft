#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	i = n;
	j = 0;
	while (i)
	{
		i = i / 10;
		j++;
	}
	str = malloc(j);
	if (n < 0)
	{
		n = n * -1;
		j++;
	}
	while (j--)
	{
		str[j] = n % 10 + 48;
		n = n / 10;
	}
	if (str[0] == 48 && (str[1]))
		str[0] = '-';
	return (str);
}
