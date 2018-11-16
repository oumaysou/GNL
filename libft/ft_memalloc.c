/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:16:32 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 18:20:59 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tmp;

	tmp = (void *)malloc(sizeof(void) * size);
	if (tmp == NULL)
		return (0);
	ft_bzero(tmp, size);
	return (tmp);
}
