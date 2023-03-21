/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:47:22 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 03:02:38 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int sa(t_stack *stack, int k)
{
    int tmp;

    tmp = stack->stack_a[0];
    stack->stack_a[0] = stack->stack_a[1];
    stack->stack_a[1] = tmp;
    ft_check_maxmin(stack);
    if (k == 1)
        ft_printf("sa\n");
    return (swap_a);
}

int sb(t_stack *stack, int k)
{
    int tmp;

    tmp = stack->stack_b[0];
    stack->stack_b[0] = stack->stack_b[1];
    stack->stack_b[1] = tmp;
    ft_check_maxmin(stack);
    if (k == 1)
        ft_printf("sb\n");
    return (swap_b);
}

int ss(t_stack *stack, int k)
{
    int tmp;

    tmp = stack->stack_a[0];
    stack->stack_a[0] = stack->stack_a[1];
    stack->stack_a[1] = tmp;
    tmp = stack->stack_b[0];
    stack->stack_b[0] = stack->stack_b[1];
    stack->stack_b[1] = tmp;
    ft_check_maxmin(stack);
    if (k == 1)
        ft_printf("ss\n");
    return (swap_ab);
}