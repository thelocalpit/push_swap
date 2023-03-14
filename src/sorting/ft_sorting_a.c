/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:59 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/14 16:57:03 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la prima funzione da scrivere è necessaria per mettere in ordine stack a
    nel caso in cui siano 3 elementi */
#include "../../includes/push_swap.h"

void    ft_sorting_a(t_stack *stack)
{
    ft_find_maxmin_a(stack);
    if (stack->index_mina == 0)
    {
        if (stack->index_maxa == 1)
        {
            rra(stack);
            sa(stack);
        }
    }
    else if (stack->index_mina == 1)
    {
        if (stack->max_a == 0)
            ra(stack);
        else
            sa(stack);
    }
    else
    {
        if (stack->index_maxa == 0)
            sa(stack);
        rra(stack);
    }
}

/* questa funzione mi serve per definire il max e il min dello stack di A in 
    modo da ordinare nel caso siano solo 3 elementi 
    prenderô un int i che utilizzerô per scorrere. prenderô il primo elemento
    e lo confronterô con i successivi. al momento che trovo uno piû piccolo
    o uno piu grande lo sostituisco e diventa il nuovo min o il nuovo max */  
void ft_find_maxmin_a(t_stack *stack)
{
    int i;

    i = 0;
    stack->index_mina = i;
    while (++i < stack->current_a)
    {
        if (stack->stack_a[i] < stack->stack_a[stack->index_mina])
            (stack->index_mina = i);
    }
    i = 0;
    stack->index_maxa = i;
    while (++i < stack->current_a)
    {
        if (stack->stack_a[i] > stack->stack_a[stack->index_maxa])
            stack->index_maxa = i;
    }
}

/* questa funzione è necessaria per portare gli elementi nello stack_A
    per fare questo dobbiamo girare finchè non siamo in ordine.
    per fare questo porto on top sempre
    ricorda; non hai ne i piu grandi ne i piu piccoli nello stack A
    quindi devi fare in modo di struttura a modo la cosa */
void ft_pushing_to_a(t_stack *stack)
{
    
}