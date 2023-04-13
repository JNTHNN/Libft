/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:55:01 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/13 13:59:22 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long		i;
	long long	resu;
	int			signe;

	i = 0;
	signe = 0;
	resu = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	//while (ft_isprint(str[i] == 0))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			signe = -1;
		else if (str[i] == 43)
			signe = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resu *= 10;
		resu += (str[i] - 48);
		i++;
	}
	return (resu * signe);
}	
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d",ft_atoi(av[1]));
	return (0);
}