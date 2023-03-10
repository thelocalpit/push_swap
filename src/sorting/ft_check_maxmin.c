/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_maxmin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitpiter <pitpiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:46:02 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/09 15:46:44 by pitpiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*	questa funzione ci serve per controllare e eventualmente cambiare i nuovi
	max e min dello stack di b. questo ci tornerà utile per semplificare e 
	eventualmente ridurre le mosse.
	oltre al nuovo max e al nuovo min ci salviamo anche il suo indice, ovvero
	il numero di cella in cui è.
	*/

void ft_check_maxmin(t_stack *stack) 
{
	int i;

	i = 0;
	while (i < stack->current_b)
	{
		if (stack->stack_b[i] >= stack->max_b)
		{
			stack->max_b = stack->stack_b[i];
			stack->index_maxb = i;
		}
		else if (stack->stack_b[i] < stack->min_b)
		{
			stack->min_b = stack->stack_b[i];
			stack->index_minb = i;
		}
		i++;
	}
}