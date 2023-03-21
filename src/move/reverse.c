/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:47:17 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 02:59:59 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int rra(t_stack *stack, int k)
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
    if (k == 1)
        ft_printf("rra\n");
    return (reverse_a);
}

int rrb(t_stack * stack, int k)
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
    if (k == 1)
        ft_printf("rrb\n");
    return (reverse_b);
}

int rrr(t_stack *stack, int k)
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
    if (k == 1)
        ft_printf("rrr\n");
    return (reverse_ab);
}