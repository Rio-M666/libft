/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrio <mrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:48:45 by mrio              #+#    #+#             */
/*   Updated: 2025/05/02 17:58:19 by mrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

void	ft_free(char **str, int count)
{
	while (count > 0)
	{
		count--;
		free(str[count]);
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	str = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!ft_strchr(s, c))
			len = ft_strlen(s);
		else
			len = ft_strchr(s, c) - s;
		str[i++] = ft_substr(s, 0, len);
		if (!*str)
		{
			ft_free(str, i);
			return (NULL);
		}
		s += len;
	}
	str[i] = NULL;
	return (str);
}

// int	main(void)
// {
// 	printf("%d", word_count("I   am a man", ' '));
// 	return (0);
// }