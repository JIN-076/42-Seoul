/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:18:40 by jhong             #+#    #+#             */
/*   Updated: 2021/04/13 16:29:31 by gpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define FALSE 0
# define TRUE 1
# define LINE 0
# define EMPTY 1
# define OBSTACLE 2
# define FULL 3
# define LENGTH 4

int			**read_map(char *file, int *info);
void		print_map(int **map, int *info);
void		ft_putchar(char c);

int			information(int fd_success, int fd_read, int *info);
int			valid_information(int *info, char *buf, int length);
int			ft_atoi(char *buf, int idx);

int			valid_map(int fd_success, int fd_read, int *info, int **map);
int			valid_line(int fd, int *info, int *line, char *buf);
int			information_read(char buf, int *info);
int			free_map(int **map, int line);

void		find_maxsize(int **map, int *info, int max);

#endif
