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
		ft_print_base(number / len, base, len);
	ft_putchar(base[mod]);
}

int		base_is_valid(char *base)
{
	int len;
	int flag[256];
	int i;
	int j;

	len = 256;
	i = 0;
	while (i++ < len)
		flag[i] = 0;
	j = 0;
	while (base[++j] != '\0')
	{
		if (flag[(int)base[j]] == 1)
			return (0);
		if (base[j] == '+' || base[j] == '-')
			return (0);
		flag[(int)base[j]] = 1;
	}
	if (j <= 1)
		return (0);
	return (j);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;
	int 			len;

	len = base_is_valid(base);
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
	ft_putnbr_base(15, "0123456789");
}
