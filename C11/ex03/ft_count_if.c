/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:06:38 by jhong             #+#    #+#             */
/*   Updated: 2021/04/10 20:26:54 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (i < length)
	{
		if (f(tab[i]))
		{
			cnt++;
		}
		i++;
		printf("%d\n", i);
	}
	return (cnt);
}
