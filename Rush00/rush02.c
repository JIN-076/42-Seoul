/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:32:09 by jhong             #+#    #+#             */
/*   Updated: 2021/03/27 16:57:14 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int x, int y, int x_max, int y_max) // x_max = 4, y_max = 0
{
	if ((x == 0 && y == 0) || (y == 0 && x == x_max))
		ft_putchar('A');
	else if ((x == 0 && y == y_max) || (x == x_max && y == y_max))
		ft_putchar('C');
	else if ((x > 0 && x < x_max && (y == 0 || y == y_max)))
		ft_putchar('B');
	else if (y > 0 && y < y_max && (x == 0 || x == x_max))
		ft_putchar('B');
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
