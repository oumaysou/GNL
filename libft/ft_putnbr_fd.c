/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:14:57 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 19:16:48 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned	int	i;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	i = nb;
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd(i % 10 + '0', fd);
	}
	else
		ft_putchar_fd(i + '0', fd);
}
