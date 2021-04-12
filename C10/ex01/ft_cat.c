/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:46:57 by jhong             #+#    #+#             */
/*   Updated: 2021/04/11 01:18:23 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

# define BUF_SIZE 1

char	*g_program;

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_perror(char *file)
{
	ft_putstr(basename(g_program));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

void	display_content(int fd, char *file)
{
	long			size;
	unsigned char	buf[BUF_SIZE];

	while ((size = read(fd, buf, BUF_SIZE)))
	{
		if (errno)
		{
			ft_perror(file);
			return ;
		}
		write(1, buf, size);
	}
}

int		main(int argc, char *argv[])
{
	int				fd;
	int				i;

	g_program =  argv[0];
	if (argc == 1)
		display_content(0, 0);
	else
	{
		i = 0;
		while (++i < argc)
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)
			{
				ft_perror(argv[i]);
				continue;
			}
			display_content(fd, argv[i]);
			close(fd);
		}
	}
	return (0);
}
