/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 22:39:34 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 00:09:53 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		base_from_is_valid(char *base)
{
	int len;
	int flag[256];
	int i;

	len = 256;
	i = 0;
	while (i++ < len)
		flag[i] = 0;
	while (base[++i] != '\0')
	{
		if (flag[(int)base[i]] == 1)
			return (0);
		if (base[i] == '+' || base[i == '-'])
			return (0);
		if (base[i] == '\t' || base[i] == '\v' || base[i] == '\n')
			return (0);
		if (base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
			return (0);
		flag[(int)base[i]] = 1;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int		base_to_is_valid(char *base)
{
	int len;
	int flag[256];
	int i;
	int j;

	len = 256;
	i = 0;
	while (i++ < len)
		flag[i] = 0;
	j = 0;
	while (base[++j] != '\0')
	{
		if (flag[(int)base[j]] == 1)
			return (0);
		if (base[j] == '+' || base[j] == '-')
			return (0);
		flag[(int)base[j]] = 1;
	}
	if (j <= 1)
		return (0);
	return (j);
}

int		ft_atoi_base(char *str, char *base)
{
	int result;
	int sign;
	int len;

	result = 0;
	sign = 1;
	len = base_from_is_valid(base);
	if (len)
	{
		while (*str == '\t' || *str == '\n' || *str == '\v' || *str ==  '\f' || *str == '\r' || *str == ' ')
			++str;
		while (*str == '+' || *str == '-')
		{
			if (*str++ == '-')
				sign *= -1;
		}
		while (*str >= '0' && *str <= '9')
		{
			result *= 10;
			result += (sign * (*str++ - '0'));
		}
		return (result);
	}
	return (0);
}
