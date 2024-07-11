/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:34:29 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/09 20:35:32 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb > 1)
	{
		i = nb - 1;
		while (i >= 1)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	if (nb == 0 || nb == 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	long long int	x;
	x = ft_iterative_factorial(1);
	printf("%lld\n",x);
	long long int	y;
	y = ft_iterative_factorial(10);
	printf("%lld\n",y);
	long long int	m;
	m = ft_iterative_factorial(21);
	printf("%lld\n",m);
	long long int	r;
	r = ft_iterative_factorial(19);
	printf("%lld\n",r);
	long long int	xr;
	xr = ft_iterative_factorial(-1);
	printf("%lld\n",xr);
	long long int	xt;
	xt = ft_iterative_factorial(100);
	printf("%lld\n",xt);
	return 0;
}*/
