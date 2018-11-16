/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:03:53 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 18:03:25 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int				i;
	unsigned int	srclen;
	unsigned int	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	if (size < destlen)
		return (srclen + size);
	while (destlen + i < size - 1 && src[i])
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + srclen);
}
