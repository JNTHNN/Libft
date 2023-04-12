/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:55:01 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/12 10:19:48 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	resu;
	int		signe;

	i = 0;
	signe = 1;
	resu = 0;
	while (str[i] != '\0')
		i++;
	//while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	while (ft_isprint(str[i] == 0))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (!str[i] && ft_isdigit(str[i]) == 1)
	{
		resu = (resu * 10) + (str[i] - '0');
		i++;
	}
	return (resu * signe);
}	
