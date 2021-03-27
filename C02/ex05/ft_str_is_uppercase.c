#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

int		main(void)
{
	char str[10] = "ADVSC";
	char str2[10] = "abscD";
	char str3[10] = "2434";
	char str4[10] = "Dsdfsdf";

	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
}
