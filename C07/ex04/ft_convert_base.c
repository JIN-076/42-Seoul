/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 22:53:32 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 00:10:39 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int					base_from_is_valid(char *base);
int					ft_atoi_base(char *nbr, char *base);
int					base_to_is_valid(char *base);

int					ft_print_digit_base(unsigned int num, char *base, int len, char *res)
{
	int 			mod;
	int				cnt;

	cnt = 0;
	mod = num % len;
	if (num / len)
		cnt = ft_print_digit_base(num / len, base, len, res) + 1;
	res[cnt] = base[mod];
	return (cnt);
}

char				*ft_itoa_base(int nbr, char *base, int len)
{
	unsigned int	num;
	char			*res;
	char			*ret;

	res = malloc(sizeof(char) * 34);
	ret = res;
	if (nbr >= 0)
		num = nbr;
	else
	{
		num = -nbr;
		*res++ = '-';
	}
	len = ft_print_digit_base(num, base, len, res);
	res[len + 1] = 0;
	return (ret);
}

char				*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				num;
	int				base_from_len;
	int				base_to_len;

	if ((base_from_len = base_from_is_valid(base_from)) < 2)
		return (NULL);
	if ((base_to_len = base_to_is_valid(base_to)) < 2)
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(num, base_to, base_to_len));
}



int		main()
{
	printf("%d\n", ft_atoi_base("+--3424", "0123456789"));
	printf("%s\n", ft_itoa_base(345, "0123456789", 10));
	printf("result : %s", ft_convert_base("15429", "0123456789", "0123456789"));
}
