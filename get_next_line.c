/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:25:37 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/19 13:36:39 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*ft_search_fd(int fd, t_list **begin_list)
{
	t_list	*tmp;

	tmp = *begin_list;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	ft_lstadd(begin_list, tmp);
	return (tmp);
}

static void		ft_line(t_list *getall, int *ret, char **line)
{
	*ret = 0;
	while (((char *)(getall->content))[*ret] != '\n' &&
			((char*)(getall->content))[*ret])
		(*ret)++;
	*line = ft_strsub(getall->content, 0, *ret);
	if (((char *)(getall->content))[*ret] == '\n')
		(*ret)++;
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static t_list	*getall;
	char			*freee;
	t_list			*tmp;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	tmp = getall;
	getall = ft_search_fd(fd, &tmp);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		freee = getall->content;
		getall->content = ft_strjoin(getall->content, buf);
		free(freee);
		if (ft_strchr(getall->content, '\n'))
			break ;
	}
	ft_line(getall, &ret, line);
	freee = getall->content;
	getall->content = ft_strdup(getall->content + ret);
	free(freee);
	getall = tmp;
	return (ret ? 1 : 0);
}
