/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:03:41 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 16:03:43 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1ptr;
	const unsigned char *s2ptr;

	if (!n)
		return (0);
	s1ptr = s1;
	s2ptr = s2;
	while (--n && *s1ptr == *s2ptr)
	{
		s1ptr++;
		s2ptr++;
	}
	return (*s1ptr - *s2ptr);
}
