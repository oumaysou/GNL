/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:14:14 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 15:23:34 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list1;
	t_list	*list2;
	void	*tmp;

	if (!(*begin_list))
		return ;
	list1 = *begin_list;
	while (list1->next)
	{
		list2 = list1->next;
		if ((*cmp)(list1->content, list2->content) > 0)
		{
			tmp = list1->content;
			list1->content = list2->content;
			list2->content = tmp;
			list1 = *begin_list;
		}
		else
			list1 = list1->next;
	}
}
