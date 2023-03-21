/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:42:05 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/20 11:42:05 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*ft_strjoin_gnl(char *s1, char *s2);
char	*get_line(int fd, char *line);
char	*ft_strchr_gnl(char *s, int c);
char	*get_new_line(char *line);
char	*get_next_line(int fd);
char	*new_line(char *line);
int		ft_strlen_gnl(char *s);

#endif
