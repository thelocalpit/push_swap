/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:55:43 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/08 21:30:37 by pfalasch         ###   ########.fr       */
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

int	pb(t_stack *stack, int p)
{
	int	i;

    i = stack->current_a;
    
    
    
    
}
