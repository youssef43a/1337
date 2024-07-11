/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:27:17 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/09 21:33:46 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power > 0)
	{
		i = 1;
		while (i <= power - 1)
		{
			nb = nb * nb;
			i++;
		}
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int x;

	x = ft_iterative_power(6, 2);
	printf("%d\n",x);
	int d;
	d = ft_iterative_power(6, 3);
	printf("%d\n",d);
	int w;
	w = ft_iterative_power(6, 0);
	printf("%d\n",w);
	int ye;
	ye = ft_iterative_power(6, -1);
	printf("%d\n",ye);
	int yes;
	yes = ft_iterative_power(6, 12);
	printf("%d\n",yes);
	return (0);
}*/
