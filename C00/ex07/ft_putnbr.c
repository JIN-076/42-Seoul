/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongjiin <hongjiin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:16:03 by jhong             #+#    #+#             */
/*   Updated: 2021/03/25 21:33:02 by hongjiin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_one_print(unsigned int number)
{
	int mod;

	mod = number % 10;
	if (number / 10)
	{
		ft_one_print(number / 10);
	}
	ft_putchar(mod + '0');
}

void	ft_putnbr(int nb)
{
	unsigned int input;

	if (nb < 0)
	{
		ft_putchar('-');
		input = -nb;
	}
	else
		input = nb;
	ft_one_print(input);
}
