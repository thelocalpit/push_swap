/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:08:16 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:08:18 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function is exactly the same as our ft_putchar function except that this
 * function requires the file descriptor of where to write the output as a
 * parameter. So, rather than automatically writing to the standard output, we
 * choose if we want the to use a file descriptor obtained from the open
 * system call, or we use 0, 1, or 2, to refer to the standard input, standard
 * output, or standard error, respectively. We use the write function as we did
 * in the ft_putchar function but this time rather than having the first
 * parameter of write be a 1 for the standard output we take ft_putchar's
 * int fd parameter and use it as the first parameter for write. We still use
 * the address to our char c null terminated character string as the content
 * to write, and we still know that we will be writing only one character to
 * our desired file descriptor so we use 1 since we will be writing 1 byte.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
