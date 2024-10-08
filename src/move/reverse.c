/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:47:17 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/22 17:35:22 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack *stack, int k)
{
	int	i;
	int	tmp;

	tmp = stack->stack_a[stack->current_a - 1];
	i = stack->current_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = tmp;
	ft_check_maxmin(stack);
	if (k == 1)
		ft_printf("rra\n");
}

void	rrb(t_stack *stack, int k)
{
	int	i;
	int	tmp;

	tmp = stack->stack_b[stack->current_b - 1];
	i = stack->current_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
	ft_check_maxmin(stack);
	if (k == 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack *stack, int k)
{
	int	i;
	int	tmp;

	tmp = stack->stack_a[stack->current_a - 1];
	i = stack->current_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = tmp;
	tmp = stack->stack_b[stack->current_b - 1];
	i = stack->current_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
	ft_check_maxmin(stack);
	if (k == 1)
		ft_printf("rrr\n");
}
