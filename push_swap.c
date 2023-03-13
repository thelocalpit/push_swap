/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <falaschip@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:11 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/13 11:36:11 by pfalasch         ###   ########.fr       */
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
    /*  */
	stack = ft_init(av, ac, stack, 1);
	len += ft_sorting(stack);
    j = stack->current_a;
    i = -1;
    /* le condizioni del while le facciamo con j - 3 perchè 3 elementi sono 
        facilmente ordinabili nello stack A e risparmiamo mosse piuttosto
        che a portarli nello stack B */
    while(++i < j - 3)
    {
        topush = ft_count_moves(stack);
    }

    /* se non ci sono argomenti */
	/* se ci sono argomenti fra "	" devo riempire lo stack
	funzione ft_check_stack	*/
	
	/* se ci sono argomenti ma separati da uno spazio */
	
	/* ho riempito lo stack_a a questo punto */
	
	/* controllo se ci sono doppi argomenti */

	/* mi calcolo in nbr delle mosse */

	/* uso ft_printf per stampare a schermo */

	/* libero la memoria */
	
}