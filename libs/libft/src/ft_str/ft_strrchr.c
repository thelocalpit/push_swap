/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:10:15 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:10:16 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
The C library function char *strrchr(const char *str, int c) 
searches for the last occurrence of the character c (an unsigned char) 
in the string pointed to, by the argument str.

Return Value
This function returns a pointer to the last occurrence of character in str.
If the value is not found, the function returns a null pointer.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			j;
	const char	*begin;

	begin = str;
	j = ft_strlen(str);
	str = (str + j);
	while (*str != *begin && c != *str)
		str--;
	if (c == *str)
		return ((char *) str);
	return (0);
}
