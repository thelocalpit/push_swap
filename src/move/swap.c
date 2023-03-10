/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitpiter <pitpiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:47:22 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/09 15:46:44 by pitpiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*  ok nello swap dobbiamo scambiare il primo con il secondo.
    creeremo una funzione per a per b e per entrambi.
    molto easy, utilizziamo un tmp per salvarci il valore da sostituire e via
*/

int sa(t_stack *stack)
{
    int tmp;

    tmp = stack->stack_a[0];
    stack->stack_a[0] = stack->stack_a[1];
    stack->stack_a[1] = tmp;
    // ft_check_maxmin(stack);
    ft_printf("sa\n");
    return (swap_a);
}

int sb(t_stack *stack)
{
    int tmp;

    tmp = stack->stack_b[0];
    stack->stack_b[0] = stack->stack_b[1];
    stack->stack_b[1] = tmp;
    // ft_check_maxmin(stack);
    ft_printf("sb\n");
    return (swap_b);
}

int ss(t_stack *stack)
{
    int tmp;

    tmp = stack->stack_a[0];
    stack->stack_a[0] = stack->stack_a[1];
    stack->stack_a[1] = tmp;
    tmp = stack->stack_b[0];
    stack->stack_b[0] = stack->stack_b[1];
    stack->stack_b[1] = tmp;
    // ft_check_maxmin(stack);
    ft_printf("ss\n");
    return (swap_ab);
}