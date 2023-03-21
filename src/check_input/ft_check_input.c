/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:18:25 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/21 12:20:52 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_check_stack(char *s, t_stack *stack, t_check c)
{
	stack = malloc(sizeof(t_stack));
	stack->current_a = 0;
	while (s[c.i])
	{
		if (!((s[c.i] >= '0' && s[c.i] <= '9')
				|| (s[c.i] == '-' || s[c.i] == 32)))
			ft_error_input(stack);
		if (s[c.i] == 32)
			c.trigger = 1;
		if (c.trigger == 1 && ((s[c.i] >= '0'
					&& s[c.i] <= '9') || s[c.i] == '-'))
		{
			stack->current_a++;
			c.trigger = 0;
		}
		c.i++;
	}
	return (stack);
}

void	ft_fill_stack(char *s, t_stack *stack, t_check c)
{
	int	count;

	count = 0;
	stack->stack_a = (int *)malloc(stack->current_a * sizeof(int));
	stack->stack_b = (int *)malloc(stack->current_a * sizeof(int));
	while (s[c.i])
	{
		if (s[c.i] == 32)
			c.trigger = 1;
		if (c.trigger == 1 && ((s[c.i] >= '0'
					&& s[c.i] <= '9') || s[c.i] == '-'))
		{
			stack->stack_a[count] = ft_atoi(s + c.i, stack);
            count++;
            c.trigger = 0;
		}
		c.i++;
	}
}

t_stack	*ft_check_av(char **av, t_stack *stack, t_check c)
{
    c.i = 1;
	stack->current_a = 0;
	while (c.i < c.ac)
	{
		c.j = 0;
		while (c.j < (int)ft_strlen(av[c.i]))
		{
			if (!((av[c.i][c.j] >= '0' && av[c.i][c.j] <= '9') 
					|| av[c.i][c.j] == '-'))
				ft_error_input(stack);
			if (c.trigger == 0)
					c.j++;
			else
			{
					c.trigger = 0;
					stack->current_a++;
					c.j++;
			}
		}
		c.trigger = 1;
		c.i++;
	}
	return (stack);
}

void	ft_fill_stack_multi_stack(char **av, t_stack *stack, t_check c)
{
	c.i = 1;
	stack->stack_a = (int *)malloc(stack->current_a * sizeof(int));
	stack->stack_b = (int *)malloc(stack->current_a * sizeof(int));
	while (c.i < c.ac)
	{
		c.j = 0;
		while (c.j < (int)ft_strlen(av[c.i]))
		{
			if (c.trigger == 0)
				c.j++;
			else
			{
				c.trigger = 0;
				stack->stack_a[c.i - 1] = ft_atoi(av[c.i], stack);
				c.j++;
			}
		}
		c.trigger = 1;
		c.i++;
	}
}

void	ft_check_doubles(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < stack->current_a - 1)
	{
		while (stack->stack_a[i] != stack->stack_a[j] && j < stack->current_a)
		{
			j++;
			if (i == j)
				j++;
		}
		if (stack->stack_a[i] == stack->stack_a[j] && j < stack->current_a)
			ft_error(stack);
		j = 0;
		i++;
	}
}