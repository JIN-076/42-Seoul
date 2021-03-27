#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	is_non_printable(unsigned char c)
{
	if (c < 32 || c  >= 127)
	{
		ft_putchar('\\');
		ft_putchar("0123456789abcdef"[c / 16]);
		ft_putchar("0123456789abcdef"[c % 16]);
	}
	else
		ft_putchar(c);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		is_non_printable(*str);
		str++;
	}
}

int		main(void)
{
	char str[] = "Coucou\n tu vas bien?";
	ft_putstr_non_printable(str);
}
