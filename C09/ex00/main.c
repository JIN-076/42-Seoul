/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:31:25 by jhong             #+#    #+#             */
/*   Updated: 2021/04/08 00:31:36 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	int a = 0, b = 3;
	ft_putchar('c');
	ft_putstr("strstr");
	printf("%d\n", ft_strcmp("asdf", "asdfd"));
	printf("strlen : %d\n", ft_strlen("strlen"));
	ft_swap(&a, &b);
	printf("%d, %d\n", a, b);
}
