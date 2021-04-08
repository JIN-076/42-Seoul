/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:19:44 by jhong             #+#    #+#             */
/*   Updated: 2021/04/07 19:48:42 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_is_valid(char *base)
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

int		ft_atoi_base(char *str, char *base)
{
	int result;
	int sign;
	int len;

	result = 0;
	sign = 1;
	len = base_is_valid(base);
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

int		main()
{
	printf("%d\n", ft_atoi_base(" \n\f\v---+--+123304abdk6", "0123456789"));
	printf("%d\n", ft_atoi_base("-9a", "0123456789"));
}
