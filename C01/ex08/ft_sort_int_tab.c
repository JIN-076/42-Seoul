/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:50:37 by jhong             #+#    #+#             */
/*   Updated: 2021/03/25 23:01:18 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *tab, int a, int b)
{
	int tmp;

	tmp = tab[a];
	tab[a] = tab[b];
	tab[b] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if (tab[i] < tab[j])
				ft_swap(tab, i, j);
			j++;
		}
		i++;
	}
}

int main(){

	int a[10];
	int i = 0;
	a[i++]=93;
	a[i++]=84;
	a[i++]=72;
	a[i++]=39;
	a[i++]=67;
	a[i++]=0;
	a[i++]=19;
	a[i++]=26;
	a[i++]=45;
	ft_sort_int_tab(a, 9);
	for(i=0;i<9;i++)
		printf("%d ", a[i]);
}
