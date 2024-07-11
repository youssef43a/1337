/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:16:20 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/10 21:11:13 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		while (ac > 1)
		{
			ft_putstr(av[ac - 1]);
			write(1, "\n", 1);
			ac--;
		}
	}
	return (0);
}*/
