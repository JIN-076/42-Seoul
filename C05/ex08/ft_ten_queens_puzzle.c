/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:40:46 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 15:34:26 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_copy(int from[][10], int to[][10])
{
	int i;
	int j;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
			to[i][j] = from[i][j];
	}
}

void	ft_queen_area(int row, int col, int chess[][10], char queen[])
{
	int i;

	i = 0;
	chess[row][col] = 1;
	queen[col] = row + '0';
	while (++i < 10)
	{
		if (row + i >= 0 && row + i < 10 && col + i >= 0 && col + i < 10)
			chess[row + i][col + i] = 1;
		if (row + i >= 0 && row + i < 10 && col - i >= 0 && col - i < 10)
			chess[row + i][col - i] = 1;
		if (row - i >= 0 && row - i < 10 && col + i >= 0 && col + i < 10)
			chess[row - i][col + i] = 1;
		if (row - i >= 0 && row - i < 10 && col - i >= 0 && col - i < 10)
			chess[row - i][col - i] = 1;
	}
}

int		ft_queen_locate(int col, int chess[][10], int queen_row[], char queen[])
{
	int cnt;
	int row;
	int copy[10][10];

	if (col == 10)
	{
		while (col)
			write(1, &queen[10 - col--], 1);
		write(1, "\n", 1);
		return (1);
	}
	cnt = 0;
	ft_copy(chess, copy);
	row = -1;
	while (++row < 10)
	{
		if (queen_row[row] || chess[row][col])
			continue;
		queen_row[row] = 1;
		ft_queen_area(row, col, chess, queen);
		cnt += ft_queen_locate(col + 1, chess, queen_row, queen);
		queen_row[row] = 0;
		ft_copy(copy, chess);
	}
	return (cnt);
}

int		ft_ten_queens_puzzle(void)
{
	int		chess[10][10];
	int		queen_row[10];
	char	queen[10];
	int		i;
	int		j;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
			chess[i][j] = 0;
		queen_row[i] = 0;
	}
	return (ft_queen_locate(0, chess, queen_row, queen));
}
