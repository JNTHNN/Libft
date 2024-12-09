/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:55:01 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/09 12:27:27 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_secure(int i)
{
	if (i < INT_MIN)
		return (0);
	if (i > INT_MAX)
		return (-1);
	else
		return (i);
}

int	ft_atoi(const char *str)
{
	long		i;
	long int	resu;
	int			sign;

	i = 0;
	sign = 1;
	resu = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
	}
	while (ft_isdigit(str[i]))
	{
		resu = resu * 10 + (str[i++] - '0');
		ft_secure(resu * sign);
	}
	return (resu * sign);
}
