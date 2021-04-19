/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:45:50 by jhong             #+#    #+#             */
/*   Updated: 2021/04/10 23:19:21 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

char *g_err_msg[2];

int		ft_do_op(char argv, int n1, int n2);
int		valid_operator(char op);

void	ft_putchar(char c);
void	print_number(unsigned int number);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

void	ft_error_msg(char op);
void	ft_error(void);

#endif
