/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:59 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/14 19:46:46 by pfalasch         ###   ########.fr       */
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
    quindi devi fare in modo di struttura a modo la cosa 
    mi trovo il max e il min di A che sono già in ordine ascendente
    */
void ft_pushing_to_a(t_stack *stack)
{
    int index_top_a;
    int i;
    int half_current_a;
    int half_current_b;

    index_top_a = 0;
    i = -1;
    half_current_a = ft_index_half_stack(stack->current_a);
    half_current_b = ft_index_half_stack(stack->current_b);
    ft_find_maxmin_a(stack);
    if (stack->stack_b[0] < stack->stack_a[0])
    {
        if (stack->stack_a[0] < stack->stack_a[stack->index_mina])
            ft_sta_maj_stb_1(stack, half_current_a);
        else
            ft_sta_maj_stb_2(stack, half_current_a, index_top_a, i);
    }
}

int ft_index_half_stack(int current)
{   
    if ((current % 2) != 0)
        return (current / 2 + 1);
    else
        return (current / 2);
}

ft_sta_maj_stb_1(t_stack *stack, int half_current_a)
{
    if (stack->index_mina < half_current_a)
    {
        while (stack->index_mina != 0)
        {
            ra(stack);
            ft_find_maxmin_a(stack);
        }
    }
    else
    {
        while (stack->index_mina != 0)
        {
            rra(stack);
            ft_find_maxmin_a(stack);
        }
    }
}
/* questa funzione gestisce la situaizone in cui lo stack_b[0] < stack_a[0]
    ma non è un nuovo minimo. ciò significa che devo portare on top    */
ft_sta_maj_std_2(t_stack *stack, int half_current_a, int index_top_a, int i)
{
    index_top_a = ft_find_
}
/* questa funzione mi serve per trovare l'elemento che devo portare on top 
affinchè tutto rimanga in ordine una volta che porto l'elemento da B
dobbiamo trovare  */
int ft_find_next_top_a (t_stack *stack)
{
    int i;

    i = 0;
    while ()
}