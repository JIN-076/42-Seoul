/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:00:25 by jhong             #+#    #+#             */
/*   Updated: 2021/04/10 19:06:46 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *map;

	i = -1;
	map = (int*)malloc(sizeof(int) * length);
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}
