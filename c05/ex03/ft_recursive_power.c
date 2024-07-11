/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:44:45 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/10 17:48:38 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int x;

	x = ft_recursive_power(8,9);
	printf("%d\n",x);
	return 0;
}*/
