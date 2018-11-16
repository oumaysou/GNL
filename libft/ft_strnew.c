/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:21:54 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 18:22:11 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tmp;

	tmp = (char *)malloc(sizeof(*tmp) * (size + 1));
	if (tmp == NULL)
		return (0);
	ft_memset(tmp, 0, size + 1);
	return (tmp);
}
