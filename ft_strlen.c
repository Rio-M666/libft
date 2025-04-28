/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:00:26 by mrio              #+#    #+#             */
/*   Updated: 2025/04/28 18:08:17 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *c = "abcde";
// 	printf("%zu", ft_strlen(c));
// 	return (0);
// }
// %zuとはsize_t型の符号なし整数を入出力するためのフォーマット
// z: size_t 型であることを示します。

// u;符号なしunsigned integer）であることを示します。