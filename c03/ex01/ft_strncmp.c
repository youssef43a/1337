/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 22:17:03 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/07 11:43:45 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	calc;

	calc = 0;
	i = 0;
	while (s1[i] != '\0' && n--)
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
	char	*s1 = "abcderty";
	char	*s2 = "abcd";

	printf("%d\n",ft_strncmp(s1, s2 ,6));
}*/
