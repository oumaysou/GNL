/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:39:39 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/27 10:17:29 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

# define BUFF_SIZE 4000

int	get_next_line(const int fd, char **line);

#endif
