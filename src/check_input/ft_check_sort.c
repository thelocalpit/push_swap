/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:49:24 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 12:21:44 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_init(char **av, int ac, int k)
{
	t_check	check;
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	check.ac = ac;
	check.i = 0;
	check.j = 0;
	check.trigger = 1;
	if (ac == 2)
	{
		stack = ft_check_stack(av[1], stack, check);
		ft_fill_stack(av[1], stack, check);
	}
	else
	{
		stack = ft_check_av(av, stack, check);
		ft_fill_stack_multi_stack(av, stack, check);
	}
	if (stack->current_a == 1)
		ft_close(stack);
	ft_check_doubles(stack);
	if (k == 1)
		ft_check_init_sort(stack);
	return (stack);
}

void	ft_check_init_sort(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->current_a -1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return ;
		i++;
	}
	if (i == stack->current_a - 1)
		ft_close_init(0);
}
