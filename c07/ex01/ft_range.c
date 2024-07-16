/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:56:38 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/15 12:16:09 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*inttab;
	int	i;

	if (min >= max)
		return (NULL);
	inttab = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		inttab[i] = min++;
		i++;
	}
	return (inttab);
}
