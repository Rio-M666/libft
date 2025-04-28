/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 03:00:17 by mrio              #+#    #+#             */
/*   Updated: 2025/04/28 15:15:17 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char buf1[10] = "abcdefghij";
	char buf2[10] = "1234567890";
	printf("%s\n", (char *)memcpy(buf1, buf2, 3));
	printf("%s\n", (char *)ft_memcpy(buf1, buf2, 3));
	return (0);
}