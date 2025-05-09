/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:35:00 by mrio              #+#    #+#             */
/*   Updated: 2025/05/07 16:20:51 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int i;
// 	i = '$';
// 	printf("%d\n", isalnum(i));
// 	printf("%d", ft_isalnum(i));
// 	return (0);
// }