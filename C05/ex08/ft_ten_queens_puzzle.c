/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:40:46 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 02:29:17 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int N;
int cnt;
char col[10];

int	abs(int number)
{
	int nb;

	if (number >= 0)
		nb = number;
	else
		nb = -number;
	return (nb);
}

int Assign(int i)
{
	int r = 1;
	int flag = 1;

	while (r < i && flag)
	{
		if (col[i] == col[r] || abs(col[i] - col[r]) == i - r)
			flag = 0;
		r++;
	}
	return flag;
}

void queen(int i)
{
	if (Assign(i))
	{
		if (i == N)
			cnt++;
		else
		{
			for (int j = 1; j <= N; j++)
			{
				col[i + 1] = j;
				write(1, &col[i + 1], 1);
				queen(i + 1);
			}
		}
	}
}

int		main()
{
	queen(0);
}
