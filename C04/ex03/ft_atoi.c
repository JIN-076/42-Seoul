#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str ==  '\f' || *str == '\r' || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (sign * (*str++ - '0'));
	}
	return (result);
}

int main()
{
	printf("%d\n",ft_atoi(" -+--++-2147a483648"));
}
