/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:07 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/08 21:04:12 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/include/libft.h"
# include "../libs/ft_printf/ft_printf.h"
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
	int		max_a;
	int		min_b;
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

/* push function */

/* rotate funciton */

/* check and fill stack a */

/* sorting function */

/* checking stacks */

#endif