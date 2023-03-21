/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:10:45 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 15:15:53 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_error_input(t_stack *stack)
{
	ft_printf("error\n");
	free(stack);
	exit(0);
}

void	ft_error(t_stack	*stack)
{
	ft_printf("Error\n");
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
	exit(0);
}
