#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}

int		main(void)
{
	char dest[] = "aaabbb";

	printf("%s\n", ft_strcat(dest, "BlockDMask"));
	return (0);
}
