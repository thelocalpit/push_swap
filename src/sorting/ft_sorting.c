/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:52 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/17 14:32:14 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  faremo uuna prima condizione nella quale tratteremo il caso easy in cui 
	abbiamo 3 elementi. una volta chiusa la prima situazione,
	passiamo alla seconda che comprende lórdinamento di tutto il
	progetto con ft_first */

#include "../../includes/push_swap.h"

void	ft_sorting(t_stack *stack)
{
	// int	len;
/*     int i = -1; */

    if (stack->current_a == 3)
	{
		ft_sorting_a(stack);
    /*     i = -1;
        while (++i < stack->current_a)
            ft_printf("%i\n", stack->stack_a[i]); */
        ft_close(stack);
	}
	// len = 0;
	/* len +=  */ft_first_push_to_b(stack);
    return;
    /* return	(len); */
}

/* questa funzione è creata principalmente per semplificare la correzzione delle
	delle leggi di norminette (altirmenti funzioni troppo lunghe).
	In questa funzione cominciamo a portare i primi 2 elementi di A in B. 
	poichè la mossa più economica si traduce nel portare subito i due numeri che
	stanno on top 
    forse è meglio spostarlo in un altro file*/

void	ft_first_push_to_b(t_stack *stack)
{
	stack->current_b = 0;
	stack->min_b = 0;
	stack->max_b = 0;
    if (stack->stack_a[0] > stack->stack_a[1])
    {
        stack->min_b = stack->stack_a[1];
        stack->max_b = stack->stack_a[0];
    }
    else
    {
        stack->min_b = stack->stack_a[0];
        stack->max_b = stack->stack_a[1];
    }
    pb(stack);
    pb(stack);
/*     return (2); */
}