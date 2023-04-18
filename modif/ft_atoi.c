/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:55:01 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/18 11:08:30 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long		i;
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
		if (str[i] == '+')
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resu = resu * 10 + (str[i] - 48);
		i++;
		if (resu * signe < INT_MIN)
			return (0);
		if (resu * signe > INT_MAX)
			return (-1);
	}
	return (resu * signe);
}	
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d",ft_atoi(av[1]));
	return (0);
}
*/