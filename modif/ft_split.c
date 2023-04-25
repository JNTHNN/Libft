/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:58:55 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/24 14:28:22 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_substr(char const *s, char c)
{
	int	str;
	size_t i;

	i = 0;
	str = 0;
	while(s[i] != '\0')
	{
		while (s[i] ==c && s[i])
			i++;
		if (s[i] != c && s[i])
			i++;
	}
	str += 1;
	return (str);
}

static size_t to_sep(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * ( count_substr(s,c) + 1));
	if (!s || !str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c || s[i] != '\0')
		{
			str[j] = malloc(sizeof(char *) * (to_sep(&s[i], c) + 1));
			k = 0;
			while (s[i] != c && s[i] != '\0')
				str[j][k++] = s[i++];
			str[j][k] = '\0';
			j++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	str[j] = '\0';
	return (str);
}