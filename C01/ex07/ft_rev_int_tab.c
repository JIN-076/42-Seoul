/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:47:10 by jhong             #+#    #+#             */
/*   Updated: 2021/03/25 22:49:35 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int left;
	int right;
	int tmp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		tmp = tab[left];
		tab[left++] = tab[right];
		tab[right--] = tmp;
	}
}

int main(){
	int a[10];
	int i = 0;
	a[i++]=1;
	a[i++]=2;
	a[i++]=3;
	a[i++]=4;
	a[i++]=5;
	a[i++]=6;
	a[i++]=7;
	a[i++]=8;
	a[i++]=9;
	ft_rev_int_tab(a, 9);
	for(i=0;i<9;i++)
		printf("%d ", a[i]);
}
