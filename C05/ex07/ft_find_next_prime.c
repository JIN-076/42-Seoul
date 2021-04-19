/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:39:10 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 17:56:59 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_sqrt(int nb)
{
	int				ret;
	unsigned int	sq;

	if (nb <= 0)
		return (0);
	ret = 1;
	sq = 1;
	while (sq < (unsigned int)nb)
	{
		ret++;
		sq = ret * ret;
	}
	if (sq == (unsigned int)nb)
		return (ret);
	return (ret - 1);
}

int					ft_is_prime(int nb)
{
	int				ret;
	int				nb_sqrt;

	if (nb < 2)
		return (0);
	ret = 1;
	nb_sqrt = ft_sqrt(nb);
	while (++ret <= nb_sqrt)
	{
		if (nb % ret == 0)
			return (0);
	}
	return (1);
}

int					ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
