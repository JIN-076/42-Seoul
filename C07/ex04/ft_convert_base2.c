/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 22:39:34 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 21:45:10 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_base_int_len(char *str, char *base, int base_len)
{
	int	cnt;
	int	idx;

	cnt = -1;
	while (str[++cnt] != '\0')
	{
		idx = 0;
		while (str[cnt] != base[idx] && idx < base_len)
			idx++;
		if (idx == base_len)
			break ;
	}
	return (cnt);
}

int		ft_pow(int base, int exp)
{
	int	ret;

	ret = 1;
	while (exp--)
		ret *= base;
	return (ret);
}

int		ft_str_to_int_base(char *str, char *base, int len)
{
	int	idx;
	int	ret;
	int	str_len;

	idx = 0;
	ret = 0;
	str_len = (ft_base_int_len(str, base, len));
	while (*str != '\0')
	{
		idx = 0;
		while (*str != base[idx] && idx < len)
			idx++;
		if (idx == len)
			break ;
		ret += idx * ft_pow(len, --str_len);
		str++;
	}
	return (ret);
}

int		base_is_valid(char *base)
{
	int	len;
	int	flag[256];

	len = 256;
	while (len--)
		flag[len] = 0;
	while (base[++len] != '\0')
	{
		if (flag[(int)base[len]] == 1)
			return (0);
		if (base[len] == '+' || base[len] == '-')
			return (0);
		if (base[len] == '\t' || base[len] == '\v' || base[len] == '\n')
			return (0);
		if (base[len] == '\f' || base[len] == '\r' || base[len] == ' ')
			return (0);
		flag[(int)base[len]] = 1;
	}
	return (len);
}

int		ft_atoi_base(char *str, char *base, int len)
{
	int	sign;
	int	idx;

	sign = 1;
	while (*str != '\0')
		if ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		else
			break ;
	while (*str == '+' || *str == '-')
	{
		idx = 0;
		if (*str == '-')
			sign *= -1;
		else if (*str == '+')
			sign *= 1;
		while (*str != base[idx] && idx < len)
			idx++;
		if (idx < len)
			break ;
		++str;
	}
	return (sign * ft_str_to_int_base(str, base, len));
}
