#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(unsigned int number)
{
	int mod;

	mod = number % 10;
	if (number / 10)
	{
		print_number(number / 10);
	}
	ft_putchar(mod + '0');
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = -nb;
	}
	else
		number = nb;
}

int		main(void)
{
	ft_putnbr(42);
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
}
