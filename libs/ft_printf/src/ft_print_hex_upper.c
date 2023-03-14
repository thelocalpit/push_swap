/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:22 by pfalasch          #+#    #+#             */
/*   Updated: 2023/02/06 16:50:08 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex_upper(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_put_hex_upper(nbr / 16);
		ft_put_hex_upper(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
		{
			ft_putchar(nbr - 10 + 'A');
		}
	}
}

int	ft_print_hex_upper(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		ft_put_hex_upper(nbr);
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}
