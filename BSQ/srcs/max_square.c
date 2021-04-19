/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpark <gpark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:22:54 by gpark             #+#    #+#             */
/*   Updated: 2021/04/13 13:48:23 by gpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		min_nearby(int **map, int i, int j)
{
	int min;

	min = map[i - 1][j - 1] < map[i - 1][j] ? map[i - 1][j - 1] : map[i - 1][j];
	min = min < map[i][j - 1] ? min : map[i][j - 1];
	return (min);
}

void	fill_square(int **map, int max, int maxcol, int maxrow)
{
	int	i;
	int	j;

	i = -1;
	while (++i < max)
	{
		j = -1;
		while (++j < max)
			map[maxcol - i][maxrow - j] = -1;
	}
}

void	find_maxsize(int **map, int *info, int max)
{
	int	i;
	int	j;
	int	maxcol;
	int	maxrow;

	i = -1;
	while (++i < info[LINE])
	{
		j = -1;
		while (++j < info[LENGTH])
		{
			if (map[i][j] == 0)
				continue;
			if (i != 0 && j != 0)
				map[i][j] = min_nearby(map, i, j) + 1;
			if (max < map[i][j])
			{
				max = map[i][j];
				maxcol = i;
				maxrow = j;
			}
		}
	}
	fill_square(map, max, maxcol, maxrow);
}
