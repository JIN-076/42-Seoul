/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:34:02 by jhong             #+#    #+#             */
/*   Updated: 2021/04/13 18:30:17 by gpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			**read_map(char *file, int *info)
{
	int		**map;
	int		fd_read;
	int		fd_success;

	if ((fd_success = open(file, O_RDWR)) == -1)
		return (FALSE);
	fd_read = open(file, 0);
	if (fd_read == -1)
		return (FALSE);
	if (!information(fd_success, fd_read, info))
		return (FALSE);
	if (!(map = (int**)malloc(sizeof(int*) * info[LINE])))
		return (FALSE);
	if (!valid_map(fd_success, fd_read, info, map))
		return (FALSE);
	return (map);
}
