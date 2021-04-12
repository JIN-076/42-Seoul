#include <stdio.h>

int		ft_count_if(char **tab, int length, int(*f)(char*));

int		ft_put(char *str)
{
	if (*str == 'a')
	{
		return (0);
	}
	return (1);
}

int		main(void)
{
	char *array[4] = {"abc", "acd", "aoo"};
	printf("%d\n", ft_count_if(array, 3, &ft_put));
}
