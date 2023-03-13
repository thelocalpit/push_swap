/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:02:56 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/13 19:37:58 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* in questa funzione dobbiamo effettivamente fare i movimenti per pushare
    in stack B. 
    anche qua ci serviamo di due int che ci permettono di calcolare
    la metà del current A-B
     */
void ft_realsort(t_stack *stack, t_topush topush)
{
    int half_current_a;
    int half_current_b;
    int i;

    if ((stack->current_a % 2) != 0)
        half_current_a = stack->current_a / 2 + 1;
    else
        half_current_a = stack->current_a / 2;
    if ((stack->current_b % 2) != 0)
        half_current_b = stack->current_b / 2 + 1;
    else
        half_current_b = stack->current_b / 2;
    if (topush.index_a < half_current_a && topush.index_b < half_current_b)
        ft_timetopush_firsthalf_b(stack, topush, i);
    else if (topush.index_a >= half_current_a && topush.index_b >= half_current_b)
        ft_timetopush_secondhalf_b(stack, topush, i);
    else if (topush.index_a < half_current_a && topush.index_b >= half_current_b)
        ft_timetopush_mix_1(stack, topush, i);
    else if (topush.index_a < half_current_a && topush.index_b >= half_current_b)
        ft_timetopush_mix_2(stack, topush, i);
    pb(stack);
}
/* questa funzione serve per effettuare le mosse per il caso in cui siano
    tutti e due sopra gli elementi  */
void ft_timetopush_firsthalf_b(t_stack *stack, t_topush topush, int i)
{
    if (topush.index_a == topush.index_b)
    {
        while (++i < topush.index_a)
            rr(stack);
    }
    else if (topush.index_a > topush.index_b)
    {
        while (++i < topush.index_b)
            rr(stack);
        i = -1;
        while (++i < (topush.index_a - topush.index_b)
            ra(stack);
    else
        while (++i < topush.index_a)
            rr(stack);
        i = -1;
        while (++i < (topush.index_b - topush.index_a)
            rb(stack);
    }
}
void ft_timetopush_secondhalf_b(t_stack *stack, t_topush topush, int i)
{
    if ((stack->current_a - topush.index_a 
            >= (stack->current_b - topush.index_b))
    {
        while (++i < (stack->current_b - topush.index_b))
            rrr(stack);
        i = -1;
        while (++i < ((stack->current_a - topush.index_a)
                 - (stack->current_b - topush.index_b)
            rra (stack);
    }
    else if ((stack->current_a - topush.index_a 
            < (stack->current_b - topush.index_b))
    {
        while (++i < (stack->current_a - topush.index_a))
            rrr(stack);
        i = -1;
        while (++i < ((stack->current_b - topush.index_b)
                 - (stack->current_a - topush.index_a)
            rrb (stack);
    }
}


