/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:30:59 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/13 12:30:46 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	space_left;
	size_t	copied;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	space_left = dstsize - dst_len - 1;
	copied = ft_strlcpy(dst + dst_len, src, space_left);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	return (dst_len + copied);
}
