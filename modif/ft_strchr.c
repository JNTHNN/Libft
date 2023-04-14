/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:31:11 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/14 11:24:44 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char 	ch;

	str = (char *)s;
	ch = c;
	while (*str != ch)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
