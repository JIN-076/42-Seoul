/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:59:50 by jhong             #+#    #+#             */
/*   Updated: 2021/04/01 16:04:26 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int		main(int argc, char *argv[])
{
	int g_i;

	g_i = 0;
	while (++g_i < argc)
	{
		write(1, argv[g_i], ft_strlen(argv[g_i]));
		write(1, "\n", 1);
	}
}
