/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:25:37 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/16 17:26:00 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	int			ret;
	char		buf[BUFF_SIZE + 1];
	static char	*getall;
	char		*freee;

	if (!getall)
		getall = ft_strdup("");
	freee = NULL;
	if (fd == -1 || !line || read(fd, buf, 0) == -1)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		freee = getall;
		getall = ft_strjoin(getall, buf);
		free(freee);
		if (ft_strchr(getall, '\n'))
			break ;
	}
	ret = 0;
	while (getall[ret] != '\n' && getall[ret])
		ret++;
	*line = ft_strsub(getall, 0, ret);
	if (getall[ret] == '\n')
		ret++;
	freee = getall;
	getall = ft_strdup(getall + ret);
	free(freee);
	if (!ret)
		return (0);
	return (1);
}
