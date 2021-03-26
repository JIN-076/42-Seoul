/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongjiin <hongjiin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:51:40 by jhong             #+#    #+#             */
/*   Updated: 2021/03/25 21:33:23 by hongjiin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combination(int n, int digit, char comb[])
{
	if (n == digit)
	{
		write(1, comb, digit);
		if (comb[0] != 10 - digit + '0')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	else
	{
		comb[n] = comb[n - 1] + 1;
		while (comb[n] <= 10 - digit + n + '0')
		{
			ft_combination(n + 1, digit, comb);
			comb[n]++;
		}
	}
}

void	ft_print_combn(int n)
{
	char output[9];

	output[0] = '0';
	while (output[0] <= 10 - n + '0')
	{
		ft_combination(1, n, output);
		output[0]++;
	}
}
