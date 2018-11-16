/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:09:53 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 15:20:45 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	check;
	t_list			*list;

	check = 1;
	list = begin_list;
	while (list)
	{
		if (nbr == check)
			return (list);
		check++;
		list = list->next;
	}
	return (NULL);
}
