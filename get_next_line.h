/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:01:56 by mflury            #+#    #+#             */
/*   Updated: 2023/02/22 16:25:59 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	int			pos;
	char		content[BUFFER_SIZE];
	int			maxsize;
	int			fd;
}					t_list;

char	*get_next_line(int fd);
char	*ft_strjoin(char *str, char c);
int		ft_strlen(char *str);

#endif
