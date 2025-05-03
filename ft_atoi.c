/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyachirio <miyachirio@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:11:35 by mrio              #+#    #+#             */
/*   Updated: 2025/05/03 12:25:36 by miyachirio       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	j = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i]=='+')
	{
		if(nptr[i]=='-')
			j = -1;
		i++;
	}
	w = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		w = (w * 10) + (nptr[i++] - '0');
	}
	return (w * j);
}

// int	main(void)
// {
// 	char *s = "wjdio";
// 	printf("%d", atoi(s));
// 	return (0);
// }