/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:34:16 by mrio              #+#    #+#             */
/*   Updated: 2025/04/28 17:15:45 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
    unsigned char *s;
    int i;
    

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
    i=0;
    while(n--)
    {
        
    }
}

#include <stdio.h>

int	main(void)
{
	char buf1[10] = "abcdefghij";
	char buf2[10] = "1234567890";
	printf("%s\n", (char *)memmove(buf1, buf2, 3));
	return (0);
}