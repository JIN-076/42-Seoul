#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (1)
			{
				j++;
				if (to_find[j] == '\0')
					return (str + i);
				if (str[i + j] != to_find[j])
					break ;
			}
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%s\n", ft_strstr("hello", "llo"));
	return (0);
}
