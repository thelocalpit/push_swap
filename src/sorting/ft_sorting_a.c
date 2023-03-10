/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitpiter <pitpiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:59 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/10 12:58:50 by pitpiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la prima funzione da scrivere è necessaria per mettere in ordine stack a
    nel caso in cui siano 3 elementi */
#include "../../includes/push_swap.h"

void    ft_sorting_a(t_stack *stack)
{
    ft_find_maxmin_a(stack);
    /* se abbiamo solo due elementi e sono invertiti */
    if (stack->index_mina == 0)
    {
        if (stack->index_maxa == 1)
        {
            rra(stack);
            sa(stack);
        }
    }
    else if (stack)
        
}