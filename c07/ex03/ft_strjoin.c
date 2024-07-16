/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:41:40 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/16 19:48:04 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count(char **strs, int size)
{
	int	i;
	int	total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*t;
	int		len;
	int		i;

	if (size == 0)
	{
		t = (char *)malloc(sizeof(char));
		t[0] = '\0';
		return (t);
	}
	len = ft_count(strs, size) + (size - 1) * ft_strlen(sep);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char *strs[] = {"youssef","ahmed","said"};
	char *joined_str = ft_strjoin(0,strs, "\0");
	if (joined_str == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}
	printf("Joined string: %s\n", joined_str);
	return 0;
}*/
