/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:08:22 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:08:24 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function writes the string s to the file descriptor fd followed by a
 * '\n' to make a new line. This function is exactly the same as our ft_putendl
 * function except that we take in a parameter for the file descriptor. We will
 * use our ft_putstr_fd and ft_putchar_fd functions to make this function work.
 * Please review ft_putstr_fd and ft_putchar_fd to understand the inner
 * workings of this function.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
