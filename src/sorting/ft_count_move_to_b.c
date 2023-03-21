/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_move_to_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:53:58 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 02:06:00 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_topush	ft_count_moves(t_stack	*stack)
{
	int top_b;
	int tmp_index_a;
	int tmp_index_b;
	t_topush topush;

    topush.index_a = 0;
    topush.index_b = 0;
    topush.count_moves = 0;
    tmp_index_b = 0;
    tmp_index_a = 0;
    topush.tmp_moves = 0;
    top_b = 0;
    while (tmp_index_a < stack->current_a)
    {
        top_b = ft_next_topb(stack, tmp_index_a);
        tmp_index_b = ft_find_index_s_b(stack, top_b);
        topush = ft_find_max_moves(stack, tmp_index_a, tmp_index_b, topush);
        tmp_index_a++;
    }
    return (topush);
}

int ft_next_topb (t_stack   *stack, int tmp_index_a)
{
    int j;
    int tmp;

    j = -1;
    tmp = 0;
    if (stack->stack_a[tmp_index_a] > stack->max_b
        || stack->stack_a[tmp_index_a] < stack->min_b)
    {
        return (stack->max_b);
    }
    else
    {
        while (++j < stack->current_b - 1)
        {
            if (stack->stack_a[tmp_index_a] < stack->stack_b[j] 
                && stack->stack_a[tmp_index_a] > stack->stack_b[j + 1])
            {
                tmp = j + 1;
                break;
            }
        }
        return (stack->stack_b[tmp]);
    }
}

int ft_find_index_s_b(t_stack *stack, int top_b)
{
    int i;

    i = 0;
    while (i < stack->current_b)
    {
        if (stack->stack_b[i] == top_b)
            break ;
        i++;
    }
    return (i);
}

t_topush ft_find_max_moves(t_stack *stack, int tmp_index_a, int tmp_index_b, t_topush topush)
{
    int half_current_a;
    int half_current_b;

    if ((stack->current_a % 2) != 0)
		half_current_a = stack->current_a / 2 + 1;
	else
		half_current_a = stack->current_a / 2;
	if ((stack->current_b % 2) != 0)
		half_current_b = stack->current_b / 2 + 1;
	else
		half_current_b = stack->current_b / 2;
    if (tmp_index_b >= half_current_b && tmp_index_a >= half_current_a)
        topush = ft_index_over(stack, tmp_index_a, tmp_index_b, topush);
    else if (tmp_index_b < half_current_b && tmp_index_a < half_current_a)
        topush = ft_index_under(tmp_index_a, tmp_index_b, topush);
    else
    {
        if (tmp_index_b < half_current_b && tmp_index_a >= half_current_a)
            topush.tmp_moves = tmp_index_b + (stack->current_a - tmp_index_a);
        else
            topush.tmp_moves = tmp_index_a + (stack->current_b - tmp_index_b);
    }
    if (topush.count_moves > topush.tmp_moves || tmp_index_a == 0)
        topush = ft_new_cheapest(tmp_index_a, tmp_index_b, topush);
    return (topush);
}
