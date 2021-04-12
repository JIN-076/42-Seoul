/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:36:02 by jhong             #+#    #+#             */
/*   Updated: 2021/04/09 12:11:49 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

void		ft_join(int size, char *join_str, char **strs, char *sep)
{
	int 	i;
	int 	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			*join_str++ = strs[i][j];
		j = -1;
		while (i < size - 1 && sep[++j] != '\0')
			*join_str++ = sep[j];
	}
	*join_str = 0;
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		sep_len;
	char	*join_str;

	i = -1;
	len = 1;
	sep_len = ft_strlen(sep);
	while (++i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += sep_len;
	}
	join_str = malloc(sizeof(char) * len);
	ft_join(size, join_str, strs, sep);
	return (join_str);
}

#include <stdio.h>

int		main()
{
	char *strs[] = {"hello world", "bye world", "123456789"};
	printf("%p", ft_strjoin(0, strs, "AAaAA"));
}
