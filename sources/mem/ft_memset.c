/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:16:08 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 12:27:09 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*cb;
	unsigned char	uc;

	uc = (unsigned char) c;
	cb = b;
	i = 0;
	while (len > i)
	{
		cb[i] = uc;
		i++;
	}
	return (b);
}
