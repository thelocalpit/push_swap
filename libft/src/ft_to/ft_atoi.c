/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:02:21 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/18 18:22:17 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This is a recreation of the atoi function in C. We take a string of
**	characters that are supposed to be a number converted into an int.
**	According to the man, "The atoi function converts the initial portion of
**	the string point to by str to int representation."*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}
/* 
int main(void)
{
	char *s = "   ---+-+01234506789ab567";
	printf("%d", ft_atoi(s));
}

 */