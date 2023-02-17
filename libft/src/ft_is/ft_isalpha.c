/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:03:12 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:03:14 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isalpha() function checks whether a character is an alphabet or not.
In C programming, isalpha() function checks whether a character is an 
alphabet (a to z and A-Z) or not. 
If a character passed to isalpha() is an alphabet, it returns a 
non-zero integer, if not it returns 0. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
