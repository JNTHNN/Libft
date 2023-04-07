/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:38:56 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/07 10:38:29 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		if (i > dstsize)
			return (0);
		else
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
