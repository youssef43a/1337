/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:34:11 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/02 10:22:54 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	not_up;
	int	not_low;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		not_up = str[i] < 'A' || str[i] > 'Z';
		not_low = str[i] < 'a' || str[i] > 'z';
		if (not_up && not_low)
			return (0);
		i++;
	}
	return (1);
}
