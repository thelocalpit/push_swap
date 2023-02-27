/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:08:05 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/20 17:23:02 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy byte string
**
** DESCRIPTION:
** 		The memmove() function copies n bytes from string s2 to string s1.  The
**	two strings may overlap; the copy is always done in a non-destructive
**	manner.
*/

/*According to the man this function copies len bytes from string src to string
 * dst. The two strings may overlap; the copy is always done in a non
 * destructive manner. The ft_memmove function returns the original value of
 * dst.*/

/* da rifare. non capisco come evitare di sovrascrivere. nel esempio di 
apuchill non capisco perchè parte dal fondo se la source è più piccola della
destination. 
Non è nel mio interesse comincaire a copiare dal inizio del dst? in che modo 
gestisce un eventuale problema di sovrapposizione di celle di memoria?
 */

/* questa va bene ora, c'è verso scriverla anche utilizzando memcpy, 
forse in maniera più semplice */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	} 
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
