/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:22:36 by jhong             #+#    #+#             */
/*   Updated: 2021/04/04 13:31:34 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		**ft_last_process(int idx, int *input, int **map, int ***flag)
{
	int i;
	int **result;

	if (idx == g_size * g_size)
		return (ft_check(input, map) ? map : 0);
	else
	{
		i = -1;
		while (++i < g_size)
		{
			if (map[idx / g_size][idx % g_size])
				return (ft_last_process(idx + 1, input, map, flag));
			if (flag[COL][idx % g_size][i] || flag[ROW][idx / g_size][i])
				continue;
			ft_put_map(idx, map, flag, i + 1);
			result = ft_last_process(idx + 1, input, map, flag);
			if (result)
				return (result);
			map[idx / g_size][idx % g_size] = 0;
			flag[COL][idx % g_size][i] = FALSE;
			flag[ROW][idx / g_size][i] = FALSE;
		}
	}
	return (0);
}

void	ft_logic(int *input, int **map, int ***flag)
{
	int i;
	int j;
	int k;

	if (input == 0)
	{
		ft_print_map(0);
		return ;
	}
	i = -1;
	while (++i < 2)
	{
		j = -1;
		while (++j < g_size)
		{
			k = -1;
			while (++k < g_size)
			{
				map[j][k] = 0;
				flag[i][j][k] = FALSE;
			}
		}
	}
	ft_first_process(input, map, flag);
	ft_print_map(ft_last_process(0, input, map, flag));
}
