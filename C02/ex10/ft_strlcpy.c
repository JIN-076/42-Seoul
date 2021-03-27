#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int tmp;

	i = 0;
	tmp = ft_strlen(src);
	if (*dest == '\0' || *src == '\0')
		return (0);
	while (i < tmp && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (tmp);
}

int				main(void)
{
	char src[10] = "hello";
	char dest[10] = "goods";

	printf("%u", ft_strlcpy(dest, src, 3));
	printf("%lu", strlcpy(dest, src, 3));

	char src2[10] = "goodbye";
	char dest2[10] = "welcome";

	printf("%u", ft_strlcpy(dest2, src2, 3));
	printf("%lu", strlcpy(dest2, src2, 3));
}
