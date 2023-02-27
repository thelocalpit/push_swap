/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:09:11 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:09:13 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
**
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*s2;

	len_s1 = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, (len_s1 + 1));
	return (s2);
}
