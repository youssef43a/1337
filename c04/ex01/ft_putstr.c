/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:01:27 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/08 10:22:12 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	ft_putstr("hello youssef ennajar haw are you\n");
	return 0;
}*/
