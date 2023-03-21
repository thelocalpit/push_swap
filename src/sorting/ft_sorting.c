/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:52 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/21 02:57:27 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  faremo uuna prima condizione nella quale tratteremo il caso easy in cui 
	abbiamo 3 elementi. una volta chiusa la prima situazione,
	passiamo alla seconda che comprende lórdinamento di tutto il
	progetto con ft_first */

#include "../../includes/push_swap.h"

void	ft_sorting(t_stack *stack)
{
    if (stack->current_a == 3)
	{
		ft_sorting_a(stack);
        ft_close(stack);
	}
    ft_first_push_to_b(stack);
    return;
}

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
    pb(stack, 1);
    pb(stack, 1);
/*     return (2); */
}