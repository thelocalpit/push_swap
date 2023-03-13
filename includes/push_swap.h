/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:07 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/13 23:48:48 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/include/libft.h"
# include "../libs/ft_printf/include/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/*	mosse che posso uttilizzare, ad ogni mossa corrisponde un numero da 0 a X
	swap a primo e secondo scambiati 
	swap_b,
	swap_ab, primo e secondo di entrambi gli stack
	push_a,
	push_b,
	rotate_a, porto il primo elemento all'ultimo posto
	rotate_b,
	rotate_ab,
	reverse_a, porto l'ultimo elemento al primo posto 
	reverse_b,
	reverse_ab */

enum e_MOVES {
	swap_a = 0,
	swap_b,
	swap_ab,
	push_a,
	push_b,
	rotate_a,
	rotate_b,
	rotate_ab,
	reverse_a,
	reverse_b,
	reverse_ab,
};

/* questa struttura ci serve per il conteggio delle moves quando pusho */
typedef struct s_topush {
	int				count_moves;
	int				index_a;
	int				index_b;
	int				tmp_moves;
}					t_topush;

/*	spiegazioni delle variabili che vado ad utilizzare allínterno di questa struct
**	int		*stack_a; puntatore allo stack a
	int		*stack_b; puntatore allo stack b 
	int		current_a; numero di elementi o argomenti all'	interno dello stack a 
	int		current_b; numero di elementi o argomenti all'	interno dello stack b
	int		max_b; numero piû alto nello stack di b questo ci serve poi per lórdinamento
	int		min_b; numero più basso nello stack di b questo ci serve poi per l'	ordinamento 
	int		*moves; puntatore al numero di mosse
	int		tmp_moves; variabile da utilizzare per il calcolo delle mosse 
	int		index_maxa; indice di dove si trova il max di a
	int		index_mina; indice di dove si trova il min di a
	int		index_maxb; indice di dove si trova il max di b 
	int		index_minb;	indice di dove si trova il min di b */ 
	
typedef struct s_stack
{
	int		*stack_a;
	int		*stack_b;
	int		current_a;
	int		current_b;
	int		min_b;
	int		max_b;
	int		min_a;
	int		max_a;
	int		*moves;
	int		tmp_moves;
	int		index_maxa;
	int		index_mina;	
	int		index_maxb;
	int		index_minb;	
} 					t_stack;

/* This struct is needed for checking the correct imput */
typedef struct s_check {
	int	ac;
	int	trigger;
	int	i;
	int	j;
}				t_check;




/* swap function */
int			sa(t_stack *stack);
int			sb(t_stack *stack);
int			ss(t_stack *stack);

/* push function */
int			pa(t_stack *stack);
int			pb(t_stack *stack);

/* rotate funciton */
int			ra(t_stack *stack);
int			rb(t_stack *stack);
int			rr(t_stack *stack);

/* reverse rotate function */
int			rra(t_stack *stack);
int			rrb(t_stack *stack);
int			rrr(t_stack *stack);

/* check and fill stack a */
t_stack     *ft_init(char **av, int ac);
t_stack     *ft_check_stack(char *s, t_stack *stack, t_check c);
void        ft_fill_stack(char *s, t_stack *stack, t_check c);
t_stack     *ft_check_av(char **av, t_stack *stack, t_check c);
void		ft_fill_stack_multi_stack(char **av, t_stack *stack, t_check c);
void		ft_check_doubles(t_stack *stack);
void		ft_check_init_sort(t_stack *stack);

/* sorting function to push into stack B */
int			ft_sorting(t_stack *stack);
int			ft_first_push_to_b(t_stack *stack);
int			ft_find_index_s_b(t_stack *stack, int top_b);
t_topush	ft_find_max_moves(t_stack *stack, int i, int tmp_b,
						   t_topush topush);
int			ft_next_topb(t_stack *stack, int i);
t_topush	ft_count_moves(t_stack *stack);
void		ft_realsort(t_stack *stack, t_topush topush);
t_topush	ft_new_cheapest(int i, int tmp_b, t_topush topush);
t_topush	ft_index_under(int i, int tmp_b, t_topush topush);
t_topush	ft_index_over(t_stack *stack, int i, int tmp_b, t_topush topush);
void		ft_timetopush_firsthalf_b(t_stack *stack, t_topush topush, int i);
void		ft_timetopush_secondhalf_b(t_stack *stack, t_topush topush, int i);
void		ft_timetopush_mix_1(t_stack *stack, t_topush topush, int i);
void		ft_timetopush_mix_2(t_stack *stack, t_topush topush, int i);

/* sorting funciton to push into stack A */
void		ft_sorting_a(t_stack *stack);
/* checking stacks */
void		ft_check_maxmin(t_stack *stack);
void		ft_find_maxmin_a(t_stack *stack);

/* error/close functions */
void		ft_error_input(t_stack *stack);
void		ft_error(t_stack *stack);
void		ft_close(t_stack *stack);
void		ft_close_init(t_stack *stack);
#endif