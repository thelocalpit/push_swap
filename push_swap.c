/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitpiter <pitpiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:11 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/10 12:58:50 by pitpiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*	len = numero di argomenti passati
**	t_stack = struttura dove tengo variabili legate ai due stack A-B
**	to_push = conta mosse
**	 */
#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack		*stack;
	t_topush	topush;
	int			i;
	int			j;
	int			len;
	
	len = 0;
	if (ac == 1)
		exit(0);
	stack = ft_init(av, ac, stack, 1);
	len += ft_sorting(stack);
	/* se non ci sono argomenti */
	/* se ci sono argomenti fra "	" devo riempire lo stack
	funzione ft_check_stack	*/
	else
	{

	}
	
	/* se ci sono argomenti ma separati da uno spazio */
	else
	{
		
	}
	/* ho riempito lo stack_a a questo punto */
	
	/* controllo se ci sono doppi argomenti */

	/* mi calcolo in nbr delle mosse */

	/* uso ft_printf per stampare a schermo */

	/* libero la memoria */
	
}