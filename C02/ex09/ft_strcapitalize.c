/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:29:09 by jhong             #+#    #+#             */
/*   Updated: 2021/03/27 22:38:00 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		str_to_alpha_num(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c > '0' && c <= '9')
		return (1);
	return (0);
}

int		word_find_capitalize(char *str, int idx)
{
	int is_word_first;
	int is_word_last;

	if (str[idx] >= 'a' && str[idx] <= 'z')
	{
		str[idx] -= 32;
		is_word_first = idx;
	}
	while (str_to_alpha_num(str[++idx]))
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			str[idx] += 32;
	}
	is_word_first = idx - 1;
	return (is_word_last);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str_to_alpha_num(str[i]))
			i = word_find_capitalize(str, i);
		i++;
	}
	return (str);
}
