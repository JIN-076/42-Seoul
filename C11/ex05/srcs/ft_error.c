/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:27:51 by jhong             #+#    #+#             */
/*   Updated: 2021/04/10 22:58:52 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_error_msg(char op)
{
	if (op == '/')
		write(1, "Stop : division by zero", 23);
	else if (op == '%')
		write(1, "Stop : modulo by zero", 21);
}

void	ft_error(void)
{
	write(1, "0\n", 2);
}
