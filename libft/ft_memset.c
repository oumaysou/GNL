/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:15:31 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 15:10:07 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
