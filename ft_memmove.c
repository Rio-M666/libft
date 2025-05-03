/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyachirio <miyachirio@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:34:16 by mrio              #+#    #+#             */
/*   Updated: 2025/05/04 01:50:03 by miyachirio       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (n == 0)
		return (dest);
	if (d > s)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
		{
			*d = *s;
			d--;
			s--;
		}
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char buf1[10] = "abcdefghij";
// 	char buf2[10] = "1234567890";
// 	printf("%s\n", (char *)memmove(buf1, buf2, 3));
// 	printf("%s\n", (char *)ft_memmove(buf1, buf2, 3));
// 	return (0);
// }