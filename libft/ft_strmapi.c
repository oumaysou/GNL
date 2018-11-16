/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:08:24 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 18:25:22 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	if (!s)
		return (0);
	tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s) + 1));
	if (tmp == NULL)
		return (0);
	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			tmp[i] = f(i, s[i]);
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
