/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:08:11 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:08:12 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
** 	The memset() function writes n bytes of value c (converted to an
**	unsigned char) to the string s.
*/

/*This function is a copy of the memset function in the string.h library.
 * According to the man the memset function writes len bytes of value c
 * (converted to an unsigned char) to the string b. This function returns it's
 * first argument.*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
