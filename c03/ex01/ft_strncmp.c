/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 22:17:03 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/09 13:08:49 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	calc;

	calc = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		calc = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			return (calc);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char	*s1 = "abaeerty";
	char	*s2 = "ab\0";

	printf("%d\n",ft_strncmp(s1, s2 ,3));
}*/
