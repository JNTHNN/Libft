/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:42:28 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/13 10:47:44 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buffersrc;
	unsigned char	*bufferdst;

	buffersrc = (unsigned char *)src;
	bufferdst = (unsigned char *)dst;
	if (bufferdst < buffersrc)
		while (len --)
			*bufferdst++ = *buffersrc++;
	if (bufferdst > buffersrc)
		while (len --)
			bufferdst[len] = buffersrc[len];
	return (dst);
}
