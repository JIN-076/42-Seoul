/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:34:02 by jhong             #+#    #+#             */
/*   Updated: 2021/04/12 21:16:21 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			**read_map(char *file, int *info)
{
	int		**map;
	int		fd_read;
	int		fd_success;

	if ((fd_success = open(file, 0)) == -1)
		return (FALSE);
	fd_success = open(file, 0);
	if (valid_information(fd_success, fd_read, info) == 0)
		return (FALSE);
	if (map == (int**)malloc(sizeof(int*) * info[LINE]) == 0)
		return (FALSE);

	return (map);
}
