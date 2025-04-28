/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:45:54 by mrio              #+#    #+#             */
/*   Updated: 2025/04/28 18:08:12 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;
	unsigned int	max;

	dl = 0;
	while (dest[dl] != '\0')
		dl++;
	sl = 0;
	while (src[sl] != '\0')
		sl++;
	if (sl >= size)
		return (size + sl);
	max = size - dl - 1;
	i = 0;
	while (i < max)
	{
		if (src[i] == '\0')
			break ;
		dest[dl + i] = src[i];
		i++;
	}
	dest[i + dl] = '\0';
	return (sl + dl);
}
