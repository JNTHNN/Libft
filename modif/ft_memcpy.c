/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:40:14 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/13 10:46:42 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dstcpy;
	const char	*srccpy;

	i = 0;
	dstcpy = (char *)dst;
	srccpy = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dst);
}
