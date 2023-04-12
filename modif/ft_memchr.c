/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:44:26 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/12 10:16:41 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char   *str;

	str = (unsigned char *)s;
	while (n != 0)
	{
		if (*str++ == (unsigned char)c)
			return (str - 1);
		n--;
	}
	return (NULL);
}
// *s = memoryblock
// c = char recherche
// n = size de la recherche