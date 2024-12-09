/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:49:15 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 12:29:14 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	n = ft_strlen(needle);
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i <= len - n && haystack[i] != '\0' && len != 0)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && len > i + j)
			j++;
		if (j == n && ft_strncmp(&haystack[i], needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
