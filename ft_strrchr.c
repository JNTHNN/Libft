/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:38:05 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/04 14:21:51 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	len;
	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen((char*)s);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char*)&s[len]);
		len--;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main (void)
{
	char chaine[]="Ok Cool";
	char *dest;
	char *dest2;

	dest = ft_strrchr(chaine, 'o');
	dest2 = strrchr(chaine, 'o');
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
