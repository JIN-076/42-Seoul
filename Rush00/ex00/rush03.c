/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:31:47 by jhong             #+#    #+#             */
/*   Updated: 2021/03/28 12:46:34 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int x, int y, int x_max, int y_max)
{
	if ((x == 1 && y == 1) || (x == 1 && y == y_max))
		ft_putchar('A');
	else if ((x == x_max && y == 1) || (x == x_max && y == y_max))
		ft_putchar('C');
	else if (x > 1 && x < x_max && (y == 1 || y == y_max))
		ft_putchar('B');
	else if (y > 1 && y < y_max && (x == 1 || x == x_max))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		if (x <= 0 || y <= 0)
			break ;
		while (j <= x)
		{
			ft_print_char(j, i, x, y);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
