/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:11 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/14 16:43:03 by pfalasch         ###   ########.fr       */
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
	stack = ft_init(av, ac);
	len += ft_sorting(stack);
    j = stack->current_a;
    i = -1;
    /* le condizioni del while le facciamo con j - 3 perchè 3 elementi sono 
        facilmente ordinabili nello stack A e risparmiamo mosse piuttosto
        che a portarli nello stack B */
    while(++i < j - 3)
    {
        topush = ft_count_moves(stack);
        ft_realsort(stack, topush);
    }
    ft_find_maxmin_a(stack);
    ft_sorting_a(stack);
    i = stack->current_b;
    j = -1;
    while (++j < i)
		ft_pushing_to_a(stack);
/* 	final_sorting(stack); */
	ft_close(stack);
}