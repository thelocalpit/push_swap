/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:02:59 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/21 15:19:46 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sorting_a(t_stack *stack)
{
	ft_find_maxmin_a(stack);
	if (stack->index_mina == 0)
	{
		if (stack->index_maxa == 1)
		{
			rra(stack, 1);
			sa(stack, 1);
		}
	}
	else if (stack->index_mina == 1)
	{
		if (stack->index_maxa == 0)
			ra(stack, 1);
		else
			sa(stack, 1);
	}
	else
	{
		if (stack->index_maxa == 0)
			sa(stack, 1);
		rra(stack, 1);
	}
}

void	ft_find_maxmin_a(t_stack *stack)
{
	int	i;

	i = 0;
	stack->index_mina = i;
	while (++i < stack->current_a)
	{
		if (stack->stack_a[i] < stack->stack_a[stack->index_mina])
			stack->index_mina = i;
	}
	i = 0;
	stack->index_maxa = i;
	while (++i < stack->current_a)
	{
		if (stack->stack_a[i] > stack->stack_a[stack->index_maxa])
			stack->index_maxa = i;
	}
}

void	ft_pushing_to_a(t_stack *stack)
{
	int	index_top_a;
	int	i;
	int	half_current_a;

	index_top_a = 0;
	i = -1;
	half_current_a = ft_index_half_stack(stack->current_a);
	ft_find_maxmin_a(stack);
	if (stack->stack_b[0] < stack->stack_a[0])
	{
		if (stack->stack_b[0] < stack->stack_a[stack->index_mina])
			ft_sta_maj_stb_1(stack, half_current_a);
		else
			ft_sta_maj_stb_2(stack, half_current_a, index_top_a, i);
	}
	else
	{
		if (stack->stack_b[0] > stack->stack_a[stack->index_maxa])
			ft_stb_maj_sta_1(stack, half_current_a);
		else
			ft_stb_maj_sta_2(stack, half_current_a, index_top_a, i);
	}
	pa(stack, 1);
}

int	ft_find_next_top_a(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->current_a - 1)
	{
		if (stack->stack_b[0] > stack->stack_a[i]
			&& stack->stack_b[0] < stack->stack_a[i + 1])
			return (i + 1);
		i++;
	}
	return (0);
}

void	final_sorting(t_stack *stack)
{
	int	half_current_a;
	int	i;

	i = -1;
	if ((stack->current_a % 2) != 0)
		half_current_a = stack->current_a / 2 + 1;
	else
		half_current_a = stack->current_a / 2;
	ft_find_maxmin_a(stack);
	if (stack->index_mina >= half_current_a)
	{
		while (++i < (stack->current_a - stack->index_mina))
			rra(stack, 1);
	}
	else
	{
		while (++i < stack->index_mina)
			ra(stack, 1);
	}
}
