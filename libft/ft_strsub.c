/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:39:53 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 18:47:21 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	if (!s)
		return (0);
	if (!(tmp = ft_strnew(len)))
		return (0);
	i = 0;
	while (len--)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	return (tmp);
}
