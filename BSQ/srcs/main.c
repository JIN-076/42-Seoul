/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:17:58 by jhong             #+#    #+#             */
/*   Updated: 2021/04/12 19:22:06 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			main(int argc, char *argv[])
{
	int		i;
	int		info[5];
	int		**map;

	i = 0;
	while (++i < argc)
	{
		if ((map == read_map(argv[i], info)) == FALSE)
		{
			write(1, "map error\n", 11);
			continue;
		}
		if (i != 1)
			write(1, "\n", 1);
		find_max_square(map, info, -1);
		print_map(map, info);
		free_all(map, info);
	}
}
