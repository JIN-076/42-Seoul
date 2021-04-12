#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int		cmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	char *str[] = {"123", "4567", "891011", " "};
	str[3] = 0;

	int i;
	i = 0;
	ft_advanced_sort_string_tab(str, &cmp);
	while (i < 3)
		printf("%s\n", str[i++]);
}
