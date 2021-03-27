/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:32:17 by jhong             #+#    #+#             */
/*   Updated: 2021/03/27 16:57:15 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int x, int y, int x_max, int y_max)
{
	if (x == 0 && y == 0)
		ft_putchar('/');
	else if (x == x_max && y == y_max && x != 0 && y != 0)
		ft_putchar('/');
	else if ((x == x_max && y == 0) || (x == 0 && y == y_max))
		ft_putchar('\\');
	else if ((x == 0 || x == x_max) && y < y_max && y > 0 && y != 0)
		ft_putchar('*');
	else if ((y == 0 || y == y_max) && x < x_max && x > 0 && x != 0)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

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
			ft_print_char(j, i, x - 1, y - 1);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
