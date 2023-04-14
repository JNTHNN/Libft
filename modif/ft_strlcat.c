/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:30:59 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/14 11:07:44 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
/*{
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
{
	size_t 	len;
	size_t	space_left;

	space_left = dstsize - ft_strlen(dst) - 1;
	len = ft_strlen (dst);
	ft_memcpy(dst + len, src, dstsize);
	return (len);
}*/
{
	char *d = dst;
	const char *s = src;
	size_t n = dstsize;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;

	if (n == 0)
		return(dlen + ft_strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));
}
