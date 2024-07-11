/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:56:26 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/09 18:57:10 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
/*
#include <stdio.h>
int main()
{
	long long int	x;
	x = ft_recursive_factorial(0);
	printf("%lld",x);
	return 0;
}*/
