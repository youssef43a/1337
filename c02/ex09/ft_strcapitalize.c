/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:24:30 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/06 00:31:11 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, int i)
{
	int	not_up;
	int	not_low;
	int	not_number;

	not_low = str[i - 1] < 'a' || str[i - 1] > 'z';
	not_up = str[i - 1] < 'A' || str[i - 1] > 'Z';
	not_number = str[i - 1] < '0' || str[i - 1] > '9';
	return (not_low && not_up && not_number);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || check(str, i))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
