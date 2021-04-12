/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:37:37 by jhong             #+#    #+#             */
/*   Updated: 2021/04/10 22:05:57 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int f_value;
	int flag;

	i = -1;
	flag = 0;
	while (++i < length - 1)
	{
		f_value = f(tab[i], tab[i + 1]);
		if (!f_value)
			continue;
		if (flag == 0)
			flag = f_value;
		else if ((flag < 0 && f_value > 0) || (flag > 0 && f_value < 0))
			return (0);
	}
	return (1);
}
