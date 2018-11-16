/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:17:05 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 18:38:51 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*castdst;
	unsigned char	*castsrc;
	size_t			i;

	castdst = (unsigned char *)dst;
	castsrc = (unsigned char *)src;
	i = 0;
	if (castsrc < castdst)
	{
		while (len--)
			castdst[len] = castsrc[len];
	}
	else
	{
		while (i < len)
		{
			castdst[i] = castsrc[i];
			i++;
		}
	}
	return (dst);
}
