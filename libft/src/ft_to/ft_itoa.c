/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:05:02 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/18 20:27:45 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: convert integer to ASCII string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a string representing the
**	integer received as an argument. Negative numbers must be handled.
*/
/*This function allocates memory and returns a 'fresh' string of characters
 * terminated with a '\0' that is the char equivalent of the int passed in
 * the parameter. Negative numbers should be managed as well. If the allocation
 * fails the function will return NULL. */

#include "libft.h"

static int	div_calc(int power)
{
	int	result;

	result = 1;
	while (power > 1)
	{
		result *= 10;
		power--;
	}
	return (result);
}

static int	allocate_memory(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		n += 1;
	}
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i += 2;
	return (i);
}

static char	*conversion_minint(int n, int power, char *str)
{
	int	i;
	int	div;
	int	n_const;

	i = 0;
	n += 1;
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	div = div_calc(power);
	n_const = n;
	while (div > 9)
	{
		n = n / div;
		div = div / 10;
		str[i++] = (n % 10) + '0';
		n = n_const;
	}
	str[i++] = ((n % 10) + 1) + '0';
	str[i] = '\0';
	return (str);
}

static char	*conversion(int n, int power, char *str)
{
	int	i;
	int	div;
	int	n_const;

	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	div = div_calc(power);
	n_const = n;
	while (div > 9)
	{
		n = n / div;
		div = div / 10;
		str[i++] = (n % 10) + '0';
		n = n_const;
	}
	str[i++] = (n % 10) + '0';
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{	
	char	*str;
	int		size;
	int		power;

	size = allocate_memory(n);
	if (n < 0)
		power = size - 2;
	if (n >= 0)
		power = size - 1;
	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return (0);
	if (n == -2147483648)
		conversion_minint(n, power, str);
	else
		str = conversion(n, power, str);
	return (str);
}
