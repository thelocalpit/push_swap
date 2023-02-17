/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:07:54 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:07:56 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
** 		The memcmp() function compares byte string s1 against byte string s2.
**	Both strings are assumed to be n bytes long.
*/

/*According to the man this function compares byte string s1 against byte string
 * s2. Both strings are assumed to be n bytes long. The ft_memcmp function
 * returns zero if the two strings are identical, otherwise it returns the
 * difference between the first two differing bytes (treated as unsigned char
 * values, so that '\200' is greater than '\0', for example). Zero-length
 * strings are always identical.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
