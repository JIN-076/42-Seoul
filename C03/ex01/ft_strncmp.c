#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n-- && *s1 && *s1 == *s2)
	{
		if (n == 0)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	printf("%d\n", ft_strncmp("hello", "hello", 5));
	printf("%d\n", ft_strncmp("hello", "hallo", 1));
	printf("%d\n", ft_strncmp("hello", "hallo", 2));
	printf("%d\n", ft_strncmp("hello", "hello", 6));
	printf("%d\n", ft_strncmp("hello", "world", 6));
	printf("%d\n", ft_strncmp("world", "hello", 4));
	printf("%d\n", ft_strncmp("hello", "world", 0));
}
