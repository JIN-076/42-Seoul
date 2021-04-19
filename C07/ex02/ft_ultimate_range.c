/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:33:40 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 20:58:24 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = -1;
	while (++i < max - min)
		(*range)[i] = min + i;
	return (i);
}
