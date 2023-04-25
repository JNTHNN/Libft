/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:59:15 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/25 11:07:29 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/*static int	ft_secure(int i)
{
	if (i < INT_MIN)
		return (0);
	if (i > INT_MAX)
		return (-1);
	else
		return (i);
}
*/

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
//	long int	nb;

//	nb = ft_secure(n);
	len = ft_count(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[len - 1] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	return (str);
}

/*
char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			i;

	nb = n;
	i = ft_count(nb);
	str = malloc(sizeof(char) * i);
	if (!nb || !str)
		return (NULL);
	while (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}


	if (nb == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		nb = 147483648;
	}
*/