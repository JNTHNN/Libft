/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:31:10 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/11 15:04:43 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		y;
	int		size;

	size = sizeof(s1) + sizeof(s2);
	s = malloc(size);
	i = 0;
	y = sizeof(s1);
	if (size == 0)
		return (s);
	while (i < size)
	{
		while (s2[i] != '\0')
		{
			s[y] = s2[i];
			y++;
			i++;
		}
	}
	s[i] = '\0';
	return ((char *)s1 + *s);
}
/*
int	main(void)

{
	char	*result;

	char *s1 = "Ok ";
	char *s2 = "Super";

	result = ft_strjoin(s1, s2);

	printf("%s\n", result);

}
*/