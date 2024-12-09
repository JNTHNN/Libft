/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:40:14 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 12:27:04 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*to;
	const char	*from;

	i = 0;
	to = (char *)dst;
	from = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (dst);
}
