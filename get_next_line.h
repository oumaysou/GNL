/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:39:39 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/16 17:26:08 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h" 
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

# define BUFF_SIZE 30

int	get_next_line(const int fd, char **line);

#endif
