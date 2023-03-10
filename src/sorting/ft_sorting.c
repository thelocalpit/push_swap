/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitpiter <pitpiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:52 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/10 12:58:50 by pitpiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  faremo uuna prima condizione nella quale tratteremo il caso easy in cui 
    abbiamo 3 elementi */

#include "../../includes/push_swap.h"

int ft_sorting(t_stack *stack)
{
    int len;

    if (stack->current_a == 3)
    {
        ft_sorting_a(stack);
        ft_close(stack);
    }
    len = 0; 
    
}