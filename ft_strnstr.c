/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:36 by mrio              #+#    #+#             */
/*   Updated: 2025/04/29 19:04:43 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t l_len;
	size_t i;
	size_t j;
	if (*little == '\0')
		return ((char *)big);
	l_len = 0;
	while (little[l_len] != '\0')
	{
		l_len++;
	}
	if (l_len > len)
		return (NULL);

	return (NULL);
}