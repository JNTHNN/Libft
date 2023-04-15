/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:55:01 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/07 11:17:14 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	long int	resu;
	int			signe;

	i = 0;
	signe = 1;
	resu = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signe = -1;
			i++;
		}
	}
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
	{
		resu = (resu * 10) + (str[i] - '0');
		i++;
		if (resu * signe < INT_MIN)
			return (0);
		if (resu * signe > INT_MAX)
			return (-1);
	}
	return (resu * signe);
}	
