/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:07 by pfalasch          #+#    #+#             */
/*   Updated: 2023/02/17 16:52:29 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/include/libft.h"
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
	int 			index_a;
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


/* swap function */

/* push function */

/* rotate funciton */

/* check and fill stack a */

/* sorting function */

/* checking stacks */

#endif