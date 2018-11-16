/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 10:19:54 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 18:35:17 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*castdest;
	unsigned char	*castsrc;
	size_t			i;

	castdest = (unsigned char *)dest;
	castsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		castdest[i] = castsrc[i];
		i++;
	}
	return (dest);
}
