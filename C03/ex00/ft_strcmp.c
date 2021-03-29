#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
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
	printf("%d\n", ft_strcmp("hello", "hello")); // 문자열이 같으므로 0 반환
	printf("%d\n", ft_strcmp("hello", "world")); // 문자열이 다른데, w가 h보다 크니까 음수
	printf("%d\n", ft_strcmp("world", "hello")); // 문자열이 다른데, h가 w보다 작으니까 양수
	printf("%d\n", ft_strcmp("hello", "hallo")); // 문자열이 다른데, a가 e보다 작으니까 양수
	printf("%d\n", ft_strcmp("hello", "hello ")); // 문자열이 다른데, 공백이 널문자보다 크니까 음수

	printf("%d\n", strcmp("hello", "hello"));
	printf("%d\n", strcmp("hello", "world"));
	printf("%d\n", strcmp("world", "hello"));
	printf("%d\n", strcmp("hello", "hallo"));
	printf("%d\n", strcmp("hello", "hello "));

}
