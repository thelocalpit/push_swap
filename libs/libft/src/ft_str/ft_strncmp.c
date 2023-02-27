/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:10:04 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/18 20:29:36 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Similar to ft_strcmp the man says this function lexicographically compares the
 * NULL terminated strings s1 and s2 that are passed into the functions
 * parameters. The function returns an integer greater than, equal to, or less
 * than 0 depending on whether the string s1 is greater than, equal to, or less
 * than string s2. The comparison is again done using unsigned characters, so
 * that '\200' is greater than '\0'. The difference though, between ft_strncmp
 * and ft_strcmp is that we will only search string s1 to it's nth position. The
 * n is given in the parameters.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (!s1 || !s2 || n == 0)
		return (0);
	while ((s1[a] != '\0' || s2[a] != '\0') && a <= (n - 1))
	{
		if (s1[a] == s2[a])
			a++;
		else
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
	}
	return (0);
}
