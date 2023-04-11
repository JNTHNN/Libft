/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:16:08 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/11 18:26:17 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	char			*cb;
	unsigned char	uc;
	size_t			i;

	uc = (unsigned char) c;
	cb = b;
	i = 0;
	while (len > i)
	{
		cb[i] = uc;
		i++;
	}
}
