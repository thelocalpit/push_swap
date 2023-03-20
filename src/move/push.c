/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:55:43 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/17 15:23:34 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*  push to b. questa funzione ci servirà per pushare da a in b il numero scelto
    più economico. 
    cose da tenere in considerazione: 
    1.  devo fare posto per il nuovo numero che voglio mettere. io ho deciso
        di mettere il numero in cima. quindi devo scorrere tutto sotto di 1
    2.  aggiornare il numero totale di numeri che sono al momento in array a e 
        array b
    3.  sposto i numeri dell'array a di 1 sopra
    4.  chiamo una funzione che mi consenta di stabilire in base ai nuovi array
        quali sono i max e min
    5.  printo a schermo il nome della mossa
    6.  ritorno il numero della mossa che ho assegnato in .h
     */

int	pb(t_stack *stack)
{
	int i;

	i = stack->current_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->current_b++;
	stack->stack_b[0] = stack->stack_a[0];
	i = 1;
	while (i < stack->current_a)
	{
		stack->stack_a[i - 1] = stack->stack_a[i];
		i++;
	}
	stack->current_a--;
	ft_check_maxmin(stack);
	ft_printf("pb\n");
	return (push_b);
}

int pa(t_stack *stack)
{
	int i;

	i = stack->current_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->current_a++;
	stack->stack_a[0] = stack->stack_b[0];
	i = 1;
	while (i < stack->current_b)
	{
		stack->stack_b[i - 1] = stack->stack_b[i];
		i++;
	}
	stack->current_b--;
	ft_printf("pa\n");
	return (push_a);
}
