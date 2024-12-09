/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:46:32 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 12:27:02 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;
	size_t			i;

	i = 0;
	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ucs1[i] != ucs2[i])
			return (ucs1[i] - ucs2[i]);
		i++;
	}
	return (0);
}
