/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:44 by pfalasch          #+#    #+#             */
/*   Updated: 2023/02/06 16:51:00 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* prima di tutto controllo se str è null, nel caso fosse nullo devo 
ritornare "(null)" 
nel caso invece che esista una str scriviamo carattere per carattere */
int	ft_printstr(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
/* mi creo una funzione che mi stampi un numero in base 10. Quali sono 
i casi estremi? */

int	ft_printnbr(int nbr)
{
	unsigned int	n;
	int				len;

	len = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = (unsigned int)(nbr * -1);
		len++;
	}
	else
		n = (unsigned int)nbr;
	if (n >= 10)
		ft_printnbr(n / 10);
	ft_putchar((char)(n % 10 + 48));
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_print_unsigned(unsigned int nbr)
{
	int				len;
	unsigned int	n;

	len = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = (nbr * -1);
		len++;
	}
	else
		n = nbr;
	if (n >= 10)
		ft_printnbr(n / 10);
	ft_putchar((char)(n % 10 + 48));
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
