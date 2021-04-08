/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimage_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:33:40 by jhong             #+#    #+#             */
/*   Updated: 2021/04/07 21:35:43 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (NULL);
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = -1;
	while (++i < max - min)
		*range[i] = min + i;
	return (i);
}

#include <limits.h>
#include <stdio.h>

int		main()
{
	int *range;
	int i = -1;
	printf("%d\n", ft_ultimate_range(&range, -12, 100));
	while(++i < 36)
		printf("%d ", range[i]);
}
