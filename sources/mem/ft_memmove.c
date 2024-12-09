/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:42:28 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 12:27:06 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;

	i = 0;
	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	if (to == from && len == 0)
		return (dst);
	if (to < from)
	{
		while (len--)
		{
			to[i] = from[i];
			i++;
		}
	}
	if (to > from)
		while (len --)
			to[len] = from[len];
	return (dst);
}
