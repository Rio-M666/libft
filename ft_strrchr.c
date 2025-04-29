/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:49:38 by mrio              #+#    #+#             */
/*   Updated: 2025/04/29 17:08:24 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *s;
	int i;

	s = NULL;
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			s = (char *)&str[i];
		}
		i++;
	}
	if (c == (int)'\0')
		return ((char *)&s[i]);
	return (s);
}