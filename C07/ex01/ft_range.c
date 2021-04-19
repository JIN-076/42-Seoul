/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:49:04 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 11:49:10 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		*range;
	int		i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	i = -1;
	while (++i < max - min)
		range[i] = min + i;
	return (range);
}
