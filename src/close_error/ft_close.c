/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:37:54 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/14 16:08:58 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_close(t_stack *stack)
{
	printf("sono qui_01");
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
	exit(0);
}

void ft_close_init(t_stack *stack)
{
	printf("sono qui_02");
	free(stack);
	exit(0);
}
