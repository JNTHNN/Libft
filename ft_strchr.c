/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:31:11 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/04 13:37:48 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
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
	dest = ft_strchr(chaine, '\0');
	dest2 = strchr(chaine, '\0');
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
/* fonction qui permet de rechercher le premier c (converti en char) dans la string s, si c = '\0' la fonc trouve le '\0' final
 * returne la valeur : un pointeur sur le char localise ou NULL si le char n'y est pas
*/