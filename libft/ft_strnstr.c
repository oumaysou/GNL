/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:43:02 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 18:15:11 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (src[i] && i < n)
	{
		j = 0;
		while (src[i + j] == to_find[j] && to_find[j] && src[i + j]
				&& (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)src + i);
		else
			i++;
	}
	return (NULL);
}
