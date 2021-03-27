/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:32:20 by jhong             #+#    #+#             */
/*   Updated: 2021/03/27 16:57:16 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		if (x < 0 || y < 0)
			break ;
		while (j < x)
		{
			if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				ft_putchar('o');
			else if ((i == 0 || i == y - 1) && j != 0 && j != x - 1)
				ft_putchar('-');
			else if ((j == 0 || j == x - 1) && i != 0 && j != y - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
