#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int		main(void)
{
	char *str[] = {"hello123", "hello1", "hello11", " "};
	str[3] = 0;

	int i;
	i = 0;
	ft_sort_string_tab(str);
	while (i < 3)
		printf("%s\n", str[i++]);
}
