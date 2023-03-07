/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:07 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/06 16:55:04 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/include/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

enum e_MOVES {
	SA = 0,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
};

/* questa struttura ci serve per il conteggio delle moves */
typedef struct s_topush {
	int				count_moves;
	int				index_a;
	int				index_b;
	int				tmp_moves;
}					t_topush;

typedef struct s_stack
{
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	int		max_b;
	int		max_a;
	int		min_b;
	int		min_a;
	int		nbr_moves;
}				t_stack;

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