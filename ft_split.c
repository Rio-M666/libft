/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyachirio <miyachirio@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:48:45 by mrio              #+#    #+#             */
/*   Updated: 2025/05/04 21:56:13 by miyachirio       ###   ########.fr       */
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

char	**split_sub(char **str, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		if (!ft_strchr(s, c))
			len = ft_strlen(s);
		else
			len = ft_strchr(s, c) - s;
		str[i] = ft_substr(s, 0, len);
		if (!str[i++])
		{
			ft_free(str, i - 1);
			return (NULL);
		}
		s += len;
	}
	str[i] = NULL;
	return (str);
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
	return (split_sub(str, s, c));
}

// int	main(void)
// {
// 	printf("%d", word_count("I   am a man", ' '));
// 	return (0);
// }