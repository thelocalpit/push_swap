/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:47:20 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 01:23:18 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ra(t_stack *stack)
{
    int i;
    int tmp;

    tmp = stack->stack_a[0];
    i = 0;
    while (i < stack->current_a - 1)
    {
        stack->stack_a[i] = stack->stack_a[i + 1];
        i++;
    }
    stack->stack_a[i] = tmp;
    ft_check_maxmin(stack);
    ft_printf("ra\n");
    return (rotate_a);
}

int rb(t_stack *stack)
{
    int i;
    int tmp;

    tmp = stack->stack_b[0];
    i = 0;
    while (i < stack->current_b - 1)
    {
        stack->stack_b[i] = stack->stack_b[i + 1];
        i++;
    }
    stack->stack_b[i] = tmp;
    ft_check_maxmin(stack);
    ft_printf("rb\n");
    return (rotate_b);
}

int rr(t_stack *stack)
{
    int i;
    int tmp;

    tmp = stack->stack_a[0];
    i = 0;
    while (i < stack->current_a - 1)
    {
        stack->stack_a[i] = stack->stack_a[i + 1];
        i++;
    }
    stack->stack_a[i] = tmp;
    tmp = stack->stack_b[0];
    i = 0;
    while (i < stack->current_b - 1)
    {
        stack->stack_b[i] = stack->stack_b[i + 1];
        i++;
    }
    stack->stack_b[i] = tmp;
    ft_check_maxmin(stack);
    ft_printf("rr\n");
    return (rotate_ab);
}