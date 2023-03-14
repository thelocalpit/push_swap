/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:25 by pfalasch          #+#    #+#             */
/*   Updated: 2023/02/06 14:44:14 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* in questa funzione dobbiamo stampare l'indirzzo a cui punta il puntatore
preceduto da un "0x"  */

/* uintptr_t is an unsigned integer data type in C/C++ that is guaranteed to 
be large enough to hold a pointer value. It is used to perform arithmetic and 
comparisons on memory addresses. */

static void	ft_put_ptr(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long ptr)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	if (ptr == 0)
	{
		ft_putchar('0');
		len++;
	}
	else
	{
		ft_put_ptr(ptr);
		while (ptr != 0)
		{
			ptr = ptr / 16;
			len++;
		}
	}
	return (len);
}
