/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_maxmin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:46:02 by pitpiter          #+#    #+#             */
/*   Updated: 2023/03/21 13:01:23 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_check_maxmin(t_stack *stack)
{
	int	i;

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
