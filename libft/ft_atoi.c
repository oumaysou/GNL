/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:30:54 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 15:51:04 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57 && str[i])
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (sign == 1)
		return (-result);
	return (result);
}
