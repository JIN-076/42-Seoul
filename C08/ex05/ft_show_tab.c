/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:46:22 by jhong             #+#    #+#             */
/*   Updated: 2021/04/07 20:46:39 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	int mod;

	mod = nb % 10;
	if (nb / 10)
		ft_putnbr(nb / 10);
	ft_putchar(mod + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int cnt;

	cnt = -1;
	while (par[++cnt].str)
	{
		ft_putstr(par[cnt].str);
		ft_putnbr(par[cnt].size);
		ft_putchar('\n');
		ft_putstr(par[cnt].copy);
	}
}
