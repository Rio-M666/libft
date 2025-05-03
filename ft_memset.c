/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyachirio <miyachirio@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:12:13 by mrio              #+#    #+#             */
/*   Updated: 2025/05/04 01:50:31 by miyachirio       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;

	a = (unsigned char *)s;
	b = (unsigned char)c;
	while (n--)
	{
		*a = b;
		a++;
	}
	return ((void *)s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	buff1[10] = "abcdefghij";

// 	printf("%s\n", (char *)memset(buff1, 'z', 3));
// 	printf("%s\n", (char *)ft_memset(buff1, 'z', 3));
// }

////"%s"はヌル終端された文字列を表示するのに使われるため、(char *)にしないといけない
