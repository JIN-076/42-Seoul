* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:48:12 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 11:48:54 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != 0)
		cnt++;
	return (cnt);
}

char		*ft_strdup(char *src)
{
	int		i;
	char	*dupstr;

	dupstr = malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = -1;
	while (src[++i] != 0)
		dupstr[i] = src[i];
	dupstr[i] = 0;
	return (dupstr);
}
