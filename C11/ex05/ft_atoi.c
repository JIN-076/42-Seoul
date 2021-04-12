/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:06:36 by jhong             #+#    #+#             */
/*   Updated: 2021/04/10 23:12:33 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
	print_number(number);
}

int		ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (sign * (*str++ - '0'));
	}
	return (result);
}
