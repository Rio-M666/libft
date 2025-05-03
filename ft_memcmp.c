/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyachirio <miyachirio@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:48:14 by mrio              #+#    #+#             */
/*   Updated: 2025/05/04 01:49:04 by miyachirio       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u;
	unsigned char	*c;
	int				i;

	u = (unsigned char *)s1;
	c = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (u[i] != c[i])
			return (u[i] - c[i]);
		i++;
	}
	return (0);
}
