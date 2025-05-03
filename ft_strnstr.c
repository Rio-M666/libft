/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyachirio <miyachirio@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:36 by mrio              #+#    #+#             */
/*   Updated: 2025/05/03 23:22:10 by miyachirio       ###   ########.fr       */
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
	l_len = ft_strlen(little);
	if(l_len>len)
		return NULL;
	
	i=0;
	while(i<=len-l_len && big[i]!='\0' )
	{
		j = 0;
		while (j < l_len && big[i + j] == little[j])
			j++;
		if (j == l_len)
			return ((char *)&big[i]);
		i++;

	}
	return NULL;

}
