/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:12 by pfalasch          #+#    #+#             */
/*   Updated: 2023/02/06 16:50:02 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hex_lower(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_put_hex_lower(nbr / 16);
		ft_put_hex_lower(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
		{
			ft_putchar(nbr - 10 + 'a');
		}
	}
}

int	ft_print_hex_lower(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		ft_put_hex_lower(nbr);
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}
