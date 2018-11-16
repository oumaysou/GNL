/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:05:47 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 18:14:14 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *to_find)
{
	int i;
	int j;

	if (to_find[0] == '\0')
		return ((char *)src);
	i = 0;
	while (src[i])
	{
		j = 0;
		while (src[i + j] == to_find[j] && to_find[j] && src[i + j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)src + i);
		else
			i++;
	}
	return (NULL);
}
