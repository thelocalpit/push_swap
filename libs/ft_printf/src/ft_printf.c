/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:54 by pfalasch          #+#    #+#             */
/*   Updated: 2023/02/06 14:57:12 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* questa funzione serve per stampare i caratteri che non sono formats */
int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

/*	qui mi analizzo quale format mi arriva e lo rimando a un'altra funzione 
che mi stampa ciò che è richiesto */
int	ft_formats(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(args, int));
	if (format == 's')
		print_len += ft_printstr(va_arg(args, char *));
	if (format == 'p')
		print_len += ft_print_ptr(va_arg(args, unsigned long));
	if (format == 'i' || format == 'd')
		print_len += ft_printnbr(va_arg(args, int));
	if (format == 'u')
		print_len += ft_print_unsigned(va_arg(args, unsigned int));
	if (format == 'x')
		print_len += ft_print_hex_lower(va_arg(args, unsigned int));
	if (format == 'X')
		print_len += ft_print_hex_upper(va_arg(args, unsigned int));
	if (format == '%')
		print_len += ft_printpercent();
	return (print_len);
}

/* questa funzione scorre la stringa passata e prende gli argomenti, quando 
trova il format va a cercare la funzione per printare quel determinato format. 
altrimenti va a un'	altra funzione che invece mi va a printare il carattere. 
in questo modo io mi stampo i caratteri normali e all'occorrenza di il % stampo 
il format. */

int	ft_printf(const char *str, ...)
{
	int		print_len;
	int		i;
	va_list	args;

	i = 0;
	print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_formats(args, (str[i + 1]));
			i += 2;
		}
		else
		{
			print_len += ft_printchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (print_len);
}

/* int	main()
{
	ft_printf("ciao %s come va %d", "pippo", 5);
	return (0);
} */