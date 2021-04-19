/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:17:58 by jhong             #+#    #+#             */
/*   Updated: 2021/04/14 15:35:10 by gpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			file_create(void)
{
	int		fd_read;
	char	buf;

	if ((fd_read = open("stdin", O_CREAT | O_WRONLY | O_TRUNC,
					S_IRWXU | S_IRWXG | S_IRWXO)) == -1)
	{
		write(2, "map error\n", 10);
		return (FALSE);
	}
	while (read(0, &buf, 1))
	{
		write(fd_read, &buf, 1);
	}
	close(fd_read);
	return (TRUE);
}

void		stdin_case(void)
{
	int		**map;
	int		info[5];

	if ((file_create() == FALSE))
		return ;
	if ((map = read_map("stdin", info)) == FALSE)
	{
		write(2, "map error\n", 10);
		return ;
	}
	find_maxsize(map, info, -1);
	print_map(map, info);
	free_map(map, info[LINE]);
}

int			main(int argc, char *argv[])
{
	int		i;
	int		info[5];
	int		**map;

	i = 0;
	if (argc == 1)
	{
		stdin_case();
		return (0);
	}
	while (++i < argc)
	{
		if ((map = read_map(argv[i], info)) == FALSE)
		{
			write(2, "map error\n", 10);
			if (i != argc - 1)
				write(1, "\n", 1);
			continue;
		}
		find_maxsize(map, info, -1);
		print_map(map, info);
		free_map(map, info[LINE]);
		if (i != argc - 1)
			write(1, "\n", 1);
	}
}
