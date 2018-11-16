/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:22:02 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 14:08:29 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *pstr;

	pstr = (char *)str + ft_strlen(str);
	while (*pstr != c)
	{
		if (pstr == str)
			return (0);
		pstr--;
	}
	return (pstr);
}
