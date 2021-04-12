/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:04:06 by jhong             #+#    #+#             */
/*   Updated: 2021/04/11 00:09:42 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_tab_size(char **tab)
{
	int 	cnt;

	cnt = 0;
	while (tab[cnt])
		cnt++;
	return (cnt);
}

void		ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		cnt;
	char	*temp;

	cnt = ft_tab_size(tab);
	i = 1;
	while (i++ < cnt)
	{
		j = 0;
		while (++j < cnt)
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
			}
		}
	}
}
