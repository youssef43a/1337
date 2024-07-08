/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youennaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 22:05:16 by youennaj          #+#    #+#             */
/*   Updated: 2024/07/07 22:06:38 by youennaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;

    dest_len = 0;
    src_len = 0;
    i = 0;

    while (dest[dest_len] && dest_len < size)
        dest_len++;
    while (src[src_len])
        src_len++;

    if (dest_len == size)
        return (size + src_len);

    while (src[i] && dest_len + i + 1 < size)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return (dest_len + src_len);
}
