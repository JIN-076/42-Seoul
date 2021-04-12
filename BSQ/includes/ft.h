/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:18:40 by jhong             #+#    #+#             */
/*   Updated: 2021/04/12 21:01:25 by jhong            ###   ########.fr       */
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

int			**read_map(char *file, int *info);
void		print_map(int **map, int *info);
void		ft_putchar(char c);

#endif
