/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:05:27 by pfalasch          #+#    #+#             */
/*   Updated: 2023/01/18 14:22:04 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: delete element from list
**
** DESCRIPTION:
** 		Takes as a parameter an element and frees the memory of the element’s
**	content using the function ’del’ given as a parameter and free the element.
**	The memory of ’next’ must not be freed.
*/
/* in questo caso libero solo content.
** del(lst->content) == del((*lst).content)
** quindi sto dicendo: libera la memoria di content e basta. 
** non c'è da tornare niente.
 */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
