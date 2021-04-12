/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:22:29 by jhong             #+#    #+#             */
/*   Updated: 2021/04/12 19:24:13 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_map(int **map, int *info)
{
	int		i;
	int		j;

	i = -1;
	while (++i < info)
	{
		j = -1;
		while (++j < info)
		{
			if (!map[i][j])
				ft_putchar();
			else if (map[i][j] == -1)
				ft_putchar();
			else
				ft_putchar();
		}
		ft_putchar("\n");
	}
}
