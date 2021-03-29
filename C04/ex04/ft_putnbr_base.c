#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_base(unsigned int number, char *base, int len)
{
	int mod;

	mod = number % len;
	if (number / len)
	{
		ft_print_base(number / len, base, len);
	}
	ft_putchar(mod + '0');
}

int		base_is_valid(char *base)
{
	int len;
	int flag[256];
	int i;

	len = 256;
	i = 0;
	while (i < len)
		flag[i] = 0;
	if (len <= 1)
		return (0);
	while (base[++len] != '\0')
	{
		if (flag[(int)base[len]] == 1)
			return (0);
		if (base[len] == '+' || base[len == '-'])
			return (0);
		flag[(int)base[len]] = 1;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;
	int 			len;

	if (len)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			number = -nbr;
		}
		else
			number = nbr;
		ft_print_base(number, base, len);
	}
}

int		main(void)
{
	ft_putnbr_base(97, "poneyvif");
}
