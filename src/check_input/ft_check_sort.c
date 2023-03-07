/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:49:24 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/07 19:26:06 by pfalasch         ###   ########.fr       */
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
	if (stack->current_a == 1)
		ft_close(stack);
	ft_check_init_sort(stack);
	ft_check_doubles(stack);
	return (stack);
}

void	ft_check_init_sort(t_stack *stack)
{
	int i;

	i = 0;
	while (i < stack->current_a -1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return ;
		i++;
	}
	ft_close_init(stack);
}