/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:02:29 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/19 17:11:00 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* n is zero, ft_bzero does nothing. Another way of saying this is that we will
 * be making a string of size n and filling each index position with a 0. We
 * use our previously made ft_memset function to do this. Review ft_memset to
 * understand how it works and notice the parameters we give it here when we
 * call it. We set it ahead of time to fill whatever string at size n with 0s*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
