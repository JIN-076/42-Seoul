/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongjiin <hongjiin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:19:34 by jhong             #+#    #+#             */
/*   Updated: 2021/03/25 21:49:42 by hongjiin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_two_digit(int number)
{
	if (number / 10)
	{
		ft_putchar(number / 10 + '0');
		ft_putchar(number % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
}

void	ft_print_all(int first, int second)
{
	ft_two_digit(first);
	ft_putchar(' ');
	ft_two_digit(second);
}

void	ft_print_comb2(void)
{
	int comb[2];

	comb[0] = 0;
	while (comb[0] < 99)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] < 100)
		{
			ft_print_all(comb[0], comb[1]);
			if (comb[0] != 98 || comb[1] != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
