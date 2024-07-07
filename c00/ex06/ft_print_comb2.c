/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:29:31 by youennaj          #+#    #+#             */
/*   Updated: 2024/06/27 15:57:18 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_d(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_d('0' + (x / 10));
			ft_print_d('0' + (x % 10));
			write(1, " ", 1);
			ft_print_d('0' + (y / 10));
			ft_print_d('0' + (y % 10));
			if (x != 98 || y != 99)
				write(1, ", ", 2);
			y++;
		}
		x++;
		y = x + 1;
		x = y - 1;
	}
}
