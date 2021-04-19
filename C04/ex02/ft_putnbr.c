/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:34:15 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 14:58:22 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		number = -nb;
		ft_putchar('-');
	}
	else
		number = nb;
	print_number(number);
}
