/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:47:17 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/15 18:09:46 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*  in questa funzione faremo il rotate però al contrario. ovvero l'ultimo
    elemento andrà al primo posto. per fare questo dobbiamo 
    1.  utilizzare un tmp dove ci salviamo il valore dell'ultimo elemento.
    2.  spostiamo tutti gli elementi in basso di 1. 
    3.  mettiamo il tmp in posizione [0]
     */

int rra(t_stack *stack)
{
    int i;
    int tmp;

    tmp = stack->stack_a[stack->current_a - 1];
    i = stack->current_a;
    while (i > 0)
    {
        stack->stack_a[i] = stack->stack_a[i - 1];
        i--;
    }
    stack->stack_a[0] = tmp;
    ft_check_maxmin(stack);
    ft_printf("rra\n");
    return (reverse_a);
}

    int rrb(t_stack * stack)
    {
        int i;
        int tmp;

        tmp = stack->stack_b[stack->current_b - 1];
        i = stack->current_b;
        while (i > 0)
        {
            stack->stack_b[i] = stack->stack_b[i - 1];
            i--;
        }
        stack->stack_b[0] = tmp;
        ft_check_maxmin(stack);
        ft_printf("rrb\n");
        return (reverse_b);
    }

    int rrr(t_stack *stack)
    {
        int i;
        int tmp;

        tmp = stack->stack_a[stack->current_a - 1];
        i = stack->current_a;
        while (i > 0)
        {
            stack->stack_a[i] = stack->stack_a[i - 1];
            i--;
        }
        stack->stack_a[0] = tmp;
        tmp = stack->stack_b[stack->current_b - 1];
        i = stack->current_b;
        while (i > 0)
        {
            stack->stack_b[i] = stack->stack_b[i - 1];
            i--;
        }
        stack->stack_b[0] = tmp;
        ft_check_maxmin(stack);
        ft_printf("rrr\n");
        return (reverse_ab);
    }