/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:12:11 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 15:21:30 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*tmp;

	tmp = NULL;
	list2 = NULL;
	if (!(*begin_list))
		return ;
	list1 = *begin_list;
	while (list1)
	{
		list2 = list1->next;
		if (list1 == *begin_list)
		{
			list1->next = NULL;
			tmp = list1;
		}
		else
		{
			list1->next = tmp;
			tmp = list1;
		}
		list1 = list2;
	}
	*begin_list = tmp;
}
