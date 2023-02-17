/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:08:28 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:08:30 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function is exactly the same as our ft_putnbr function except that we
 * will be using our ft_putchar_fd function instead of ft_putchar beacuse we 
 * will be accepting a parameter for this function that is our file descriptor.
 * I recommend learning how the ft_putnbr and ft_putchar_fd functions work in
 * order to understand how this function works. The explanation of the inner
 * workings of this function are the same as I gave for ft_putnbr.*/

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
