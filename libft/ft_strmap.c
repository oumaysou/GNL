/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:00:35 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 18:24:44 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*tmp;
	unsigned int	i;

	if (!s)
		return (0);
	tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s) + 1));
	if (tmp == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		tmp[i] = f(s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
