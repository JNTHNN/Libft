/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:38:56 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 12:27:45 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	while (i < dstsize - 1 && src[i] != '\0' && dstsize != 0)
	{
		if (i > dstsize)
			return (0);
		else
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
