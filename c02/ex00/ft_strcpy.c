/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <youennaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 22:47:19 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/01 00:00:06 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	compteur;

	compteur = 0;
	while (src[compteur] != '\0')
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	dest[compteur] = '\0';
	return (src);
}
