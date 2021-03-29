#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *d;

	d = dest;
	while (*d != '\0')
		d++;
	while (nb-- && *src != '\0')
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
	char dest[100] = "hello";
	printf("%s\n", ft_strncat(dest, "world", 2));
}
