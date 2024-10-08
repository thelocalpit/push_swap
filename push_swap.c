/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:11 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/22 17:56:36 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack		*stack;
	t_topush	topush;
	int			i;
	int			j;

	if (ac == 1)
		exit(0);
	stack = ft_init(av, ac, 1);
	ft_sorting(stack);
	j = stack->current_a;
	i = -1;
	while (++i < j - 3)
	{
		topush = ft_count_moves(stack);
		ft_realsort(stack, topush);
	}
	ft_find_maxmin_a(stack);
	ft_sorting_a(stack);
	i = stack->current_b;
	j = -1;
	while (++j < i)
		ft_pushing_to_a(stack);
	final_sorting(stack);
	ft_close(stack);
}
