/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:47:24 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/08 12:23:59 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb >= 0 && nb <= 9)
			ft_putchar(nb + '0');
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(nb *= (-1));
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
/*
#include <stdio.h>
int main()
{
	ft_putnbr(-20);
	printf("\n");
	return 0;
}*/