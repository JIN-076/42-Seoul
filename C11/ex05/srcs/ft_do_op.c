/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:09:33 by jhong             #+#    #+#             */
/*   Updated: 2021/04/10 23:12:48 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_do_op(char argv, int n1, int n2)
{
	int		result;

	result = 0;
	if (argv == '+')
		result = n1 + n2;
	else if (argv == '-')
		result = n1 - n2;
	else if (argv == '*')
		result = n1 * n2;
	else if (argv == '/')
		result = n1 / n2;
	else if (argv == '%')
		result = n1 % n2;
	return (result);
}

int			valid_operator(char op)
{
	if (op == '+' || op == '-' || op == '/' || op == '*' || op == '%')
		return (1);
	return (0);
}

int			main(int argc, char *argv[])
{
	int		n1;
	int		n2;
	int		result;
	char	op;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	op = argv[2][0];
	if (argv[2][1] || !valid_operator(op))
	{
		ft_error();
		return (0);
	}
	if (n2 == 0 && (op == '/' || op == '%'))
		ft_error_msg(op);
	else
	{
		result = ft_do_op(op, n1, n2);
		ft_putnbr(result);
	}
	ft_putchar('\n');
	return (0);
}
