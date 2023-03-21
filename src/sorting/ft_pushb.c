/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:02:56 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 13:33:20 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_realsort(t_stack *stack, t_topush topush)
{
	int	half_current_a;
	int	half_current_b;
	int	i;

	i = -1;
	if ((stack->current_a % 2) != 0)
		half_current_a = stack->current_a / 2 + 1;
	else
		half_current_a = stack->current_a / 2;
	if ((stack->current_b % 2) != 0)
		half_current_b = stack->current_b / 2 + 1;
	else
		half_current_b = stack->current_b / 2;
	if (topush.index_a < half_current_a && topush.index_b < half_current_b)
		ft_timetopush_firsthalf_b(stack, topush, i);
	else if (topush.index_a >= half_current_a
		&& topush.index_b >= half_current_b)
		ft_timetopush_secondhalf_b(stack, topush, i);
	else if (topush.index_a < half_current_a
		&& topush.index_b >= half_current_b)
		ft_timetopush_mix_1(stack, topush, i);
	else if (topush.index_a >= half_current_a
		&& topush.index_b < half_current_b)
		ft_timetopush_mix_2(stack, topush, i);
	pb(stack, 1);
}

void	ft_timetopush_firsthalf_b(t_stack *stack, t_topush topush, int i)
{
	if (topush.index_a == topush.index_b)
	{
		while (++i < topush.index_a)
			rr(stack, 1);
	}
	else if (topush.index_a > topush.index_b)
	{
		while (++i < topush.index_b)
			rr(stack, 1);
		i = -1;
		while (++i < (topush.index_a - topush.index_b))
			ra(stack, 1);
	}
	else
	{
		while (++i < topush.index_a)
			rr(stack, 1);
		i = -1;
		while (++i < (topush.index_b - topush.index_a))
			rb(stack, 1);
	}
}


void	ft_timetopush_secondhalf_b(t_stack *stack, t_topush topush, int i)
{
	if ((stack->current_a - topush.index_a)
		>= (stack->current_b - topush.index_b))
	{
		while (++i < (stack->current_b - topush.index_b))
			rrr(stack, 1);
		i = -1;
		while (++i < ((stack->current_a - topush.index_a)
				- (stack->current_b - topush.index_b)))
			rra (stack, 1);
	}
	else if ((stack->current_a - topush.index_a)
		< (stack->current_b - topush.index_b))
	{
		while (++i < (stack->current_a - topush.index_a))
			rrr(stack, 1);
		i = -1;
		while (++i < ((stack->current_b - topush.index_b)
				- (stack->current_a - topush.index_a)))
			rrb (stack, 1);
	}
}

void	ft_timetopush_mix_1(t_stack *stack, t_topush topush, int i)
{
	while (++i < topush.index_a)
		ra(stack, 1);
	i = -1;
	while (++i < stack->current_b - topush.index_b)
		rrb(stack, 1);
}

void	ft_timetopush_mix_2(t_stack *stack, t_topush topush, int i)
{
	while (++i < topush.index_b)
		rb(stack, 1);
	i = -1;
	while (++i < stack->current_a - topush.index_a)
		rra(stack, 1);
}