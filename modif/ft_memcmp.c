/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:46:32 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/07 09:50:10 by jgasparo         ###   ########.fr       */
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
	while (i < n && (ucs1[i] != '\0' || ucs2[i] != '\0'))
	{
		if (ucs1[i] < ucs2[i])
			return (-1);
		if (ucs1[i] > ucs2[i])
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	//printf("%d et %d", ft_memcmp("\200","\0", 3),memcmp("\200","\0", 3));
	    int array1 [] = { 54, 85, 20, 63, 21 };
    int array2 [] = { 54, 85, 19, 63, 21 };
    size_t size = sizeof( int ) * 5;

    printf("%d ", memcmp( array1, array2, size));
    printf("%d\n", ft_memcmp( array1, array2, size));       
    printf("%d ", memcmp( array1, array1, size));
    printf("%d\n", ft_memcmp( array1, array1, size) );       
    printf("%d ", memcmp( array2, array1, size));
    printf("%d\n", ft_memcmp( array2, array1, size) );  
}
*/