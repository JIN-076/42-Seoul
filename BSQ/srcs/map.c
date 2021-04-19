/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:17:02 by jhong             #+#    #+#             */
/*   Updated: 2021/04/13 16:29:57 by gpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			string_to_int(int **map, char *map_, int *info, int line)
{
	int		i;

	i = 0;
	if ((map[line - 1] = (int*)malloc(sizeof(int) * info[LENGTH])) == NULL)
		return (FALSE);
	while (i < info[LENGTH])
	{
		if (map_[i] == info[EMPTY])
			map[line - 1][i] = 1;
		else if (map_[i] == info[OBSTACLE])
			map[line - 1][i] = 0;
		i++;
	}
	free(map_);
	return (TRUE);
}

int			valid_map(int fd_success, int fd_read, int *info, int **map)
{
	char	buf;
	char	*map_;
	int		line;

	line = 0;
	while (read(fd_success, &buf, 1))
	{
		if (line < info[LINE] && valid_line(fd_success, info, &line, &buf))
		{
			if ((map_ = malloc(info[LENGTH] + 1)))
			{
				read(fd_read, map_, info[LENGTH]);
				read(fd_read, &buf, 1);
				if (string_to_int(map, map_, info, line))
					continue;
			}
			else
				return (FALSE);
		}
		free_map(map, line);
		return (FALSE);
	}
	if (line != info[LINE] && free_map(map, line))
		return (FALSE);
	return (TRUE);
}

int			valid_line(int fd, int *info, int *line, char *buf)
{
	int		length;
	int		read_success;

	length = 0;
	read_success = 1;
	if (information_read(*buf, info))
	{
		while (read_success && information_read(*buf, info))
		{
			read_success = read(fd, buf, 1);
			length++;
		}
		if (*buf == '\n')
		{
			if (*line == 0)
				info[LENGTH] = length;
			else if (info[LENGTH] != length)
				return (FALSE);
			length = 0;
			(*line)++;
			return (TRUE);
		}
	}
	return (FALSE);
}

int			information_read(char buf, int *info)
{
	if (buf == info[EMPTY] || buf == info[OBSTACLE])
		return (1);
	return (0);
}

int			free_map(int **map, int line)
{
	int i;

	i = 0;
	while (i < line)
		free(map[i++]);
	free(map);
	return (1);
}
