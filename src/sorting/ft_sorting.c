/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:52 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/10 18:16:19 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  faremo uuna prima condizione nella quale tratteremo il caso easy in cui 
    abbiamo 3 elementi. una volta chiusa la prima situazione,
    passiamo alla seconda che comprende lórdinamento di tutto il
    progetto con ft_first */

#include "../../includes/push_swap.h"

int ft_sorting(t_stack *stack)
{
    int len;

    if (stack->current_a == 3)
    {
        ft_sorting_a(stack);
        ft_close(stack);
    }
    len = 0;
    len += ft_first(stack);
    return (len);
}

/* questa funzione serve per  */
ft_first(t_stack *stack)
{
    
}