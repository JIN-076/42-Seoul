#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*));

int		ft_put(char *nbr)
{
	int i;

	i = -1;
	while (nbr[++i] != '\0')
		if (nbr[i] == 'a')
			return (1);
	return (0);
}

int		main(void)
{
	char *array = "bcd";
	char **temp;
	temp = &array;

	printf("%d\n", ft_any(temp, &ft_put));
}
