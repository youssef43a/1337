/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:36:07 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/07 09:49:13 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;
	int	calc;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		calc = s1[i] - s2[i];
		if (calc != 0)
		{
			return (calc);
		}
		i++;
	}
	return (calc);
}
/*
#include <stdio.h>
int main ()
{
	char	*s1 = "bbcd";
	char	*s2 = "cbcd";

	printf("%d\n",ft_strcmp(s1, s2));
}*/
