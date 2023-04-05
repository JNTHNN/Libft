/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:27:26 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/05 10:28:19 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = s;
	while (n > i && n != 0)
	{
		cs[i] = 0;
		i++;
		/* ft_memset(*s, 0, n)*/
	}
}

#include <stdio.h>
#include <string.h>
int main()
{
    int numbers[] = {'c' , 'd', 'e', 'f'};
    int i = 0;

    ft_bzero(numbers, 10);
       
    while (i < 20)
      printf("%d ",numbers[i++]);
  
}