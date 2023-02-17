/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:03:22 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/17 14:03:25 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() function checks whether a character is numeric 
character (0-9) or no */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
