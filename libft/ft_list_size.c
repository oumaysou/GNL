/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:13:57 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 15:21:50 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		size;

	size = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
