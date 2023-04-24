/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:02:58 by jgasparo          #+#    #+#             */
/*   Updated: 2023/04/24 14:43:46 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstsize(lst);
	if (lst == NULL)
		return (NULL);
	while (i < len)
	{
		i++;
		lst = lst->next;
	}
	return (lst->content);
}
