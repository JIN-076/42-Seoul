/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:44:39 by jhong             #+#    #+#             */
/*   Updated: 2021/04/07 22:38:19 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_charset(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int		ft_count_charset(char *str, char *charset)
{
	int cnt;
	int before;

	cnt = 1;
	before = 1;
	while (*str != 0)
	{
		if (is_charset(*str, charset))
		{
			if (!before)
				cnt++;
			before = 1;
		}
		else
			before = 0;
		str++;
	}
	if (before)
		cnt--;
	return (cnt);
}

int		ft_strstr_pos(char *str, char *charset)
{
	int j;

	j = -1;
	while (str[++j] != 0)
	{
		if (is_charset(str[j], charset))
			return (j);
	}
	return (j);
}

char	*ft_strncpy(char *dest, char *str, int len)
{
	while (len--)
		*dest++ = *str++;
	*dest = 0;
	return (str + 1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	int		size;
	char	**strs;

	size = ft_count_charset(str, charset);
	strs = (char**)malloc(sizeof(char*) * (size + 1));
	i = 0;
	while (i < size)
	{
		len = ft_strstr_pos(str, charset);
		if (len == 0)
		{
			str++;
			continue;
		}
		strs[i] = (char*)malloc(sizeof(char) * (len + 1));
		str = ft_strncpy(strs[i], str, len);
		i++;
	}
	strs[i] = 0;
	return (strs);
}
