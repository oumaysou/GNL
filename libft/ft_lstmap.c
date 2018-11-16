/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:51:03 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 19:05:09 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_list_push_back(t_list **begin_list, t_list *list)
{
	t_list *list2;

	list2 = *begin_list;
	if (*begin_list == NULL)
	{
		*begin_list = list;
		return ;
	}
	while (list2->next)
		list2 = list2->next;
	list2->next = list;
	list->next = NULL;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*newlst;

	newlst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!f(lst))
			return (NULL);
		ft_list_push_back(&newlst, f(lst));
		lst = lst->next;
	}
	return (newlst);
}
