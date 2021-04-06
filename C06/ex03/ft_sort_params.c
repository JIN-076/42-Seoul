/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:08:20 by jhong             #+#    #+#             */
/*   Updated: 2021/04/01 17:46:20 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int			ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int			ft_sort(char *argv1, char *argv2)
{
	int		i;

	i = 0;
	while (argv1[i] && argv2[i] && argv1[i] == argv2[i])
		i++;
	return ((argv1[i] > argv2[i]) ? 1 : 0);
}

int			main(int argc, char *argv[])
{
	int		g_i;
	int		g_j;
	char	*temp;

	g_i = 1;
	while (++g_i < argc)
	{
		g_j = 0;
		while (++g_j < argc - 1)
		{
			if (ft_sort(argv[g_j], argv[g_i]))
			{
				temp = argv[g_i];
				argv[g_i] = argv[g_j];
				argv[g_j] = temp;
			}
		}
	}
	g_i = 0;
	while (++g_i < argc)
	{
		write(1, argv[g_i], ft_strlen(argv[g_i]));
		write(1, "\n", 1);
	}
}
