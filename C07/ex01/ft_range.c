/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:49:04 by jhong             #+#    #+#             */
/*   Updated: 2021/04/07 20:50:24 by jhong            ###   ########.fr       */
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

int		main(){
	int i = -1;
	int *n = ft_range(-12, -10);
	if (n)
		while(++i < 24)
			printf("%d ", n[i]);
}

