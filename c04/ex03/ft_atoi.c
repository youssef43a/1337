/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:19:36 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/08 16:21:23 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	resoult;

	i = 0;
	sign = 1;
	resoult = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resoult = resoult * 10 + (str[i] - '0');
		i++;
	}
	return (sign * resoult);
}
/*
#include <unistd.h>
#include <stdio.h>
int main()
{
	int	x;

	x = ft_atoi(" ---+--+1234ab567");
	printf("%d\n",x);
	return 0;
}*/
