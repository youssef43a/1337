/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:59:03 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/11 12:10:38 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		lensrc;
	char	*new_str;

	lensrc = ft_strlen(src);
	new_str = (char *) malloc(sizeof(char) * (lensrc + 1));
	ft_strcpy(new_str, src);
	if (src == NULL)
		return (NULL);
	return (new_str);
}
/*
#include <stdio.h>
int main()
{
	char* x;
	x = ft_strdup("tngcjngvfjken\0");
	printf("%s",x);
	return 0;
}*/
