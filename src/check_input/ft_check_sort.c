/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:49:24 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/07 14:22:41 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *ft_init(char **av, int ac, t_stack *stack, int k)
{
	t_check check;
	
	check.ac = ac;
	check.i = 0;
	check.j = 0;
	check.trigger = 1;
	if (ac == 2)
	{
		/* controlliamo che gli argomenti siano ok, e ce li contiamo pure! */
		stack = ft_check_stack(av[1], stack, check);
		/* riempiamo lo stack a con gli argomenti! */
		ft_fill_stack(av[1], stack, check);
	}
	/* qui controlliamo se non ci sono le virgolette, tutti gli argomenti. */
	else 
	{
		stack = ft_check_av(av, stack, check);
		ft_fill_stack_multi_stack(av, stack, check);
		}
}