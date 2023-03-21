/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:03:06 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/21 01:24:01 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* questa funzione trattiamo il caso in cui entrambi gli elementi siano 
    sotto la metà, ovvero tmp_index_b è più grande della metà
    Mi basterà contare la distanza dal tmp di a o di b dal fondo (quindi dal totale
    di elementi che ho) per aver il totale di mosse */
t_topush ft_index_over(t_stack *stack, int tmp_index_a, int tmp_index_b, t_topush topush)
{
    if (stack->current_b - tmp_index_b < stack->current_a - tmp_index_a)
        topush.tmp_moves = stack->current_a - tmp_index_a;
    else
        topush.tmp_moves = stack->current_b - tmp_index_b;
    return (topush);
}
t_topush ft_index_under(int tmp_index_a, int tmp_index_b, t_topush topush)
{
    if (tmp_index_b >= tmp_index_a)
        topush.tmp_moves = tmp_index_b;
    else
        topush.tmp_moves = tmp_index_a;
    return (topush);
}
t_topush ft_new_cheapest(int tmp_index_a, int tmp_index_b, t_topush topush)
{
    topush.index_a = tmp_index_a;
    topush.index_b = tmp_index_b;
    topush.count_moves = topush.tmp_moves;
    return (topush);
}