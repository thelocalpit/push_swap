/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_move_to_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:53:58 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/14 15:50:55 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* in questa funzione ft_count_moves serve per contare le mosse e decidere
    quale delle mosse sia la più economica da fare
    per farlo dobbiamo scorrere tutti gli elementi e ogni volta che troviamo
    la situazione in cui un elemento è più economico lo selezioniamo. 
    per fare questo utilizziamo gli indici degli stack. In questa fase ci
    preoccupiamo solo di trovare appunto l'indice dell'elemento da portare
    on top così da pusharlo. Tutti i calcoli vengono fatti senza contare il
    push to B */

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
    /* qui devo decretare quale sia il topb. uso la funzione ft_nextopb */
    while (tmp_index_a < stack->current_a)
    {
        top_b = ft_next_topb(stack, tmp_index_a);
        tmp_index_b = ft_find_index_s_b(stack, top_b);
        topush = ft_find_max_moves(stack, tmp_index_a, tmp_index_b, topush);
        tmp_index_a++;
    }
    /* printf("questo è qualcosa da stampare: %i", topush.count_moves); */
    return (topush);
}
/* questa funzione è necessaria per decretare quale elemento dovrà stare on top
    al momento in cui pusheremo l'elemento di A in B. questo ci permette di avere
    uno stack di B ordinato cosicchè poi potremo ripushare in maniera semplice in A. 
    controlliamo quindi in primis se abbiamo un nuovo max o un nuovo minimo. Se non lo è
    ritorniamo il max_b assegnando quindi a top_b nella funzione ft_count_moves il
    relativo valore.
    se questo non accade, allora dobbiamo cercare il "posto" giusto per il nostro
    nuovo elemento: dovremmo controllare l'elemento precedente e quello successivo
    per capire se è maggiore di quello precedente e minore di quello successivo.
    così capiamo che il top di b dovrà essere l'elemento appena più piccolo del nuovo
    che vogliamo pushare da A. ES. avremo da pushare un 3 e abbiamo già in A 7, 6, 5, 2, 1.
    dovrà quindi essere inserito fra 5 e 2. 
    Significa che dobbiamo portare on top il 2 stack_a[0]. il 5 sarà invece in fondo allo stack
    stack_a[4]. in questo modo sappiamo che quando faremo il push il 3 si troverà esattamente
    fra il 2 e il 5. è facile immaginare il prcesso come se fosse una lista circolare.

    */
int ft_next_topb (t_stack   *stack, int tmp_index_a)
{
    int j;
    int tmp;

    j = -1;
    tmp = 0;
    if (stack->stack_a[tmp_index_a] > stack->max_b || stack->stack_a[tmp_index_a] < stack->min_b)
    {
        return (stack->max_b);
    }
    else
    {
        while (++j < stack->current_b - 1)
        {
            if (stack->stack_a[tmp_index_a] < stack->stack_b[j] && stack->stack_a[tmp_index_a] > stack->stack_b[j + 1])
            {
                tmp = j + 1;
                break;
            }
        }
        return (stack->stack_b[tmp]);
    }
}

/* questa funzione ci serve per trovare l'indice del top di B */
int ft_find_index_s_b(t_stack *stack, int top_b)
{
    int i;

    i = 0;
    while (i < stack->current_b)
    {
        if (stack->stack_b[i] == top_b)
            break;
        i++;
    }
    return (i);
}
/* questa funzione serve per trovare il numero di mosse totali degli elementi
    e decidere quale sia quella più economica. 
    i due int che creiamo ci servono per determinare la metà dell'indice che
    abbiamo in quel momento in modo da ottimizzare le operazioni di spsotamento
    e quindi limitare il numero di mosse.
    una volta definita la metà dei currents, cerchiamo i casi specifici in cui 
    abbiamo nello stack A l'elemento sopra o sotto la metà e il numero subito minore
    a quello che dobbiamo pushare nello stack B sopra o sotto la metà dello stack B.
    a seconda delle casistiche, creiamo delle regole affinchè si possano ridurre le
    mosse utilizzando movimenti che permettono il movimento di entrambi gli elementi
    sullo stack a e b contemporaneamente (per quanto possibile). 
    questo passaggio è di fondamentale importanza per l'ottimizzazione delle mosse. 
    ma perchè lo faccio solo dopo aver determinato il top di b? non dovrebbe essere il contrario?
     */
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
        /* nel caso in cui entrambi sono nella parte alta degli stacks */
    if (tmp_index_b >= half_current_b && tmp_index_a >= half_current_a)
        topush = ft_index_over(stack, tmp_index_a, tmp_index_b, topush);
    else if (tmp_index_b < half_current_b && tmp_index_a < half_current_a)
        topush = ft_index_under(tmp_index_a, tmp_index_b, topush);
    /* quin invece ci occupiamo di gestire i casi in cui i due elementi da 
        tenere in consideraizone non sono dalla stessa parte. le mosse in questo
        caso saranno la somma di A e B singolarmente. questo perchè non ci sono
        mosse che si possano fare contemporaneamente */
    else
    {
        if (tmp_index_b < half_current_b && tmp_index_a >= half_current_a)
            topush.tmp_moves = tmp_index_b + (stack->current_a - tmp_index_a);
        else
            topush.tmp_moves = tmp_index_a + (stack->current_b - tmp_index_b);
    }
    /* quest'ultima condizione è per decretare se il conto mosse che abbiamo calcolato
        è meglio del precedente. ovviamente condizione tmp_index_a == 0 serve perchè
        il primo calcolo avrà count_moves = 0 peffforza. quindi ci entriamo forzatamente. */
    if (topush.count_moves > topush.tmp_moves || tmp_index_a == 0)
        topush = ft_new_cheapest(tmp_index_b, tmp_index_b, topush);
    return (topush);
}
