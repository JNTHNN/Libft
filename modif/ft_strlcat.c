/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:30:59 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/07 09:24:59 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);

    if (dstsize <= dst_len)
        return src_len + dstsize;

    size_t space_left = dstsize - dst_len - 1;
    size_t copied = ft_strlcpy(dst + dst_len, src, space_left);

    return dst_len + copied;
}