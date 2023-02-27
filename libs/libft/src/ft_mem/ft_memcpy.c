/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:08:00 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 18:53:53 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* below we check if both are null we return NULL. */
/* it's not specified in the original memcpy but it's more safe */

/*According to the man this function copies n bytes from memory area src to 
 * memory area dst. If dst and src overlap, behavior is undefined. Applications
 * in which dst and src might overlap should use ft_memmove instead. This
 * function returns the original value of dst.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
