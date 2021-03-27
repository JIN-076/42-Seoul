#include <stdio.h>

int		is_number(char c)
{
	if (c > '0' && c <= '9')
		return (1);
	return 0;
}

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int 	str_to_alpha_num(char c)
{
	if (is_number(c))
		return (1);
	if (is_uppercase(c))
		return (1);
	if (is_lowercase(c))
		return (1);
	return (0);
}

int 	word_find_capitalize(char *str, int idx)
{
	int is_word_first;
	int is_word_last;

	if (str[idx] >= 'a' && str[idx] <= 'z')
	{
		str[idx] -= 32;
		is_word_first = idx;
	}
	while (str_to_alpha_num(str[++idx]))
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			str[idx] += 32;
	}
	is_word_first = idx - 1;
	return (is_word_last);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str_to_alpha_num(str[i]))
			i = word_find_capitalize(str, i);
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
}
