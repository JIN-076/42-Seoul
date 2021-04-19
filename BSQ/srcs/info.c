/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:55:15 by jhong             #+#    #+#             */
/*   Updated: 2021/04/13 16:43:47 by gpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			information(int fd_success, int fd_read, int *info)
{
	char	*buf;
	char	buffer;
	int		length;
	int		info_success;

	length = 0;
	while (read(fd_success, &buffer, 1) && buffer != '\n')
		length++;
	if (length < 4 || !(buf = (char*)malloc(sizeof(char) * (length + 1))))
		return (FALSE);
	read(fd_read, buf, length);
	read(fd_read, &buffer, 1);
	buf[length] = 0;
	info_success = valid_information(info, buf, length);
	free(buf);
	if (!info_success)
		return (FALSE);
	return (TRUE);
}

int			valid_information(int *info, char *buf, int length)
{
	int		i;
	int		flag[128];

	i = 127;
	while (i >= 0)
		flag[i--] = FALSE;
	while (++i < length - 3)
		if (buf[i] < '0' || buf[i] > '9')
			return (FALSE);
	while (i < length)
	{
		if (buf[i] < 32 || buf[i] > 126)
			return (FALSE);
		if (flag[(int)buf[i]] == TRUE)
			return (FALSE);
		flag[(int)buf[i]] = TRUE;
		i++;
	}
	if ((info[LINE] = ft_atoi(buf, length - 3)) == 0)
		return (FALSE);
	info[EMPTY] = (int)buf[length - 3];
	info[OBSTACLE] = (int)buf[length - 2];
	info[FULL] = (int)buf[length - 1];
	return (TRUE);
}

int			ft_atoi(char *buf, int idx)
{
	int		ret;

	ret = 0;
	while (idx--)
	{
		ret *= 10;
		ret += *buf++ - '0';
	}
	return (ret);
}
