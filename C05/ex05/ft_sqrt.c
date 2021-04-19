/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:22:37 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 15:16:44 by jhong            ###   ########.fr       */
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
	return (0);
}
