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

char	**ft_split(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i] == '\0')
			i++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			str = malloc(sizeof(char) * i + 1);
//			if (!str)
//				free(str);
//			str[i] = s[i];
//			ft_substr(s[i], i, i + 1);
			i++;
		}
	}
	str[i] = '\0';
	return (NULL);
}