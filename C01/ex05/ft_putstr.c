/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhong <jhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:32:25 by jhong             #+#    #+#             */
/*   Updated: 2021/03/25 22:43:02 by jhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int cursor;

	cursor = 0;
	while (str[cursor] != '\0')
	{
		write(1, &str[cursor], 1);
		cursor++;
	}
}

int	main()
{
	ft_putstr("hello world");
}
