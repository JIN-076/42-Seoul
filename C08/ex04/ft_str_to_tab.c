/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:43:15 by jhong             #+#    #+#             */
/*   Updated: 2021/04/07 20:46:03 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int 				cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					cnt;
	int					i;
	t_stock_str			*stock_str;

	cnt = -1;
	stock_str = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock_str == NULL)
		return (stock_str);
	while (++cnt < ac)
	{
		stock_str[cnt].size = ft_strlen(av[cnt]);
		stock_str[cnt].str = av[cnt];
		stock_str[cnt].copy = (char*)malloc(stock_str[cnt].size + 1);
		i = -1;
		while (++i < stock_str[cnt].size)
			stock_str[cnt].copy[i] = av[cnt][i];
		stock_str[cnt].copy[i] = 0;
	}
	stock_str[cnt].size = 0;
	stock_str[cnt].str = 0;
	stock_str[cnt].copy = 0;
	return (stock_str);
}
