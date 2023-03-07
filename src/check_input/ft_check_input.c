/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:18:25 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/07 14:27:24 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* questa funzione mi serve per accertarmi che gli argomenti allínterno di av[1] sono tutti int validi */
t_stack *ft_check_stack(char *s, t_stack *stack, t_check c)
{
	/* qui alloco la memoria di size t_stack */
	stack = malloc(sizeof(t_stack));
	stack->current_a = 0;
	/* controlliamo che gli argomenti siano validi , quindi entro valori numerici, 
	accettiamo il - e lo spazio. i è una variabile qualunque che mi serve per scorrere gli argomenti allínterno di av[1] */
	while(s[c.i])
	{
		if(!((s[c.i] >= '0' && s[c.i] <= '9'|| s[c.i] == '-' || s[c.i] == '32')))
			ft_error_input(stack);
		if(s[c.i] == ' ')
			c.trigger = 1;
		/* in questa condizione andiamo ad aumentare il current_a, ovvero ci teniamo in questo modo 
		anche il numero di argomenti passati */
		if (c.trigger == 1 && ((s[c.i] >= '0' && s[c.i] <= '9') || s[c.i] == '-'))
		{
			stack->current_a++;
			c.trigger = 0;
		}
		c.i++;
	}
	return (stack);
}
void ft_fill_stack(char *s, t_stack *stack, t_check c)
{
	int count;

	count = 0;
	/* allochiamo memoria per entrambi gli stack! 
	la memoria di dello stack di b sarà uguale a quella dello stack di a */
	stack->stack_a = (int *)malloc(stack->current_a * sizeof(int));
	stack->stack_b = (int *)malloc(stack->current_a * sizeof(int));
	while (s[c.i])
	{
		if (s[c.i] == ' ')
			c.trigger == 1;
		if (c.trigger == 1 && ((s[c.i] >= '0' && s[c.i] <= '9') || s[c.i] == '-'))
		{
			if (ft_atoi(s + c.i) >= -2147483648 && ft_atoi(s + c.i) <= 2147483647)
			{
				stack->stack_a[count] = ft_atoi(s + c.i);
				count++;
				}
				else
					ft_error(stack);
		}
		c.i++;
	}
}

t_stack	*ft_check_av(char **av, t_stack *stack, t_check c)
{
	c.i = 1;
	stack = malloc(sizeof(stack));
	stack->current_a = 0;
	while (c.i < c.ac)
	{
		c.j = 0;
		while (c.j < (int)ft_strlen(av[c.i]))
		{
			if (!((av[c.i][c.j] >= '0' && av[c.i][c.j] <= '9') || av[c.i][c.j] == '-'))
					ft_error_prev(stack);
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
void ft_fill_stack_2(char **av, t_stack *stack, t_check c) 
{
	c.i = 1;
	stack->stack_a = (int *)malloc(stack->current_a * sizeof(int));
	stack->stack_b = (int *)malloc(stack->current_a * sizeof(int));
	while (c.i < c.ac)
	{
		c.j = 0;
		while (c.j < ft_strlen(av[c.i]))
		{
			if (c.trigger == 0)
				c.j++;
			else
			{
				if (ft_atoi(av[c.i]) >= -2147483648 && ft_atoi(av[c.i]) <= 2147483647)
				{
					stack->stack_a[c.i - 1] = ft_atoi(av[c.i]);
					c.j++;
				}
				else
					ft_error(stack);
			}
		}
		c.trigger = 1;
		c.i++;
	}
}