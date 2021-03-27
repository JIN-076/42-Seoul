#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

int		main(void)
{
	char str[10] = "abcdef";
	char str2[10] = "abscD";
	char str3[10] = "2434";
	char str4[10] = "Dsdfsdf";

	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
}
