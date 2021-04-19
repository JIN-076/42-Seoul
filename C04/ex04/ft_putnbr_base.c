/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:35:26 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 16:09:56 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	len = 256;
	while (len--)
		flag[len] = 0;
	while (base[++len] != '\0')
	{
		if (flag[(int)base[len]] == 1)
			return (0);
		if (base[len] == '+' || base[len] == '-')
			return (0);
		flag[(int)base[len]] = 1;
	}
	if (len < 2)
		return (0);
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;
	int				len;

	len = base_is_valid(base);
	if (len)
	{
		if (nbr < 0)
		{
			number = -nbr;
			ft_putchar('-');
		}
		else
			number = nbr;
		ft_print_base(number, base, len);
	}
}
