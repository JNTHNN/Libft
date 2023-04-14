/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:06:51 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/14 09:30:26 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	size_t	s_len;
	size_t	set_len;

	i = 0;
	s_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (!s1)
		return (NULL);
	while(s_len > 0)
	{
		if (s1[s_len] == set[set_len])
		{
			s_len--;
			set_len--;
		}
	}
	return (0);
}