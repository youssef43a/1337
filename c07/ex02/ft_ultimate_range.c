/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:23:35 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/15 16:24:54 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (i);
}
