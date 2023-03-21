/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pusha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:00:45 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/21 02:55:55 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_index_half_stack(int current_a)
{
    if ((current_a % 2) != 0)
        current_a = current_a / 2 + 1;
    else
        current_a = current_a / 2;
    return (current_a);
}

void    ft_sta_maj_stb_1(t_stack *stack, int half_current_a)
{
    if (stack->index_mina < half_current_a)
    {
        while (stack->index_mina != 0)
        {
            ra(stack, 1);
            ft_find_maxmin_a(stack);
        }
    }
    else
    {
        while (stack->index_mina != 0)
        {
            rra(stack, 1);
            ft_find_maxmin_a(stack);
        }
    }
}

void    ft_sta_maj_stb_2(t_stack *stack, int half_current_a, int index_top_a, int i)
{
    index_top_a = ft_find_next_top_a(stack);
    if (index_top_a >= half_current_a)
    {
        while ((stack->current_a - index_top_a) > ++i)
            rra(stack, 1);
    }
    else
    {
        while (index_top_a > ++i)
            ra(stack, 1);
    }
}

void ft_stb_maj_sta_1(t_stack *stack, int half_currrent_a)
{
    if (stack->index_maxa == stack->current_a - 1)
        return;
    else if (stack->index_maxa >= half_currrent_a)
    {
        while (stack->current_a - stack->index_maxa - 1 != 0)
        {
            rra(stack, 1);
            ft_find_maxmin_a(stack);
        }
    }
    else
    {
        while (stack->index_maxa != stack->current_a - 1)
        {
            ra(stack, 1);
            ft_find_maxmin_a(stack);
        }
    }
}
void ft_stb_maj_sta_2(t_stack *stack, int half_current_a, int index_top_a, int i)
{
    index_top_a = ft_find_next_top_a(stack);
    if (index_top_a >= half_current_a)
    {
        while (++i < stack->current_a - index_top_a)
        {
            rra(stack, 1);
            ft_find_maxmin_a(stack);
        }
    }
    else
    {
        while (++i < index_top_a)
        {
            ra(stack, 1);
            ft_find_maxmin_a(stack);
        }
    }
}