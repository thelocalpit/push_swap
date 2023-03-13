/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitpiter <pitpiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:52 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/13 10:28:26 by pitpiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  faremo uuna prima condizione nella quale tratteremo il caso easy in cui 
	abbiamo 3 elementi. una volta chiusa la prima situazione,
	passiamo alla seconda che comprende lórdinamento di tutto il
	progetto con ft_first */

#include "../../includes/push_swap.h"

int	ft_sorting(t_stack *stack)
{
	int	len;

	if (stack->current_a == 3)
	{
		ft_sorting_a(stack);
		ft_close(stack);
	}
	len = 0;
	len += ft_first_push_to_b(stack);
    return	(len);
}

/* questa funzione è creata principalmente per semplificare la correzzione delle
	delle leggi di norminette (altirmenti funzioni troppo lunghe).
	In questa funzione cominciamo a portare i primi 2 elementi di A in B. 
	poichè la mossa più economica si traduce nel portare subito i due numeri che
	stanno on top */

int	ft_first_push_to_b(t_stack *stack)
{
	stack->current_b = 0;
	stack->min_b = 0;
	stack->max_b = 0;

}