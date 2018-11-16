/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:03:16 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/14 15:19:50 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*tmp;

	if (!s)
		return (0);
	if (*s == '\0')
		return ((char *)s);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (s[j] && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j > i)
		j--;
	if ((tmp = (char *)malloc(sizeof(*tmp) * (j - i + 2))) == NULL)
		return (0);
	k = 0;
	while (s[i] && i < j + 1)
	{
		tmp[k++] = (char)s[i];
		i++;
	}
	tmp[k] = '\0';
	return (tmp);
}
