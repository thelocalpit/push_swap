/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:47:37 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/20 12:43:57 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  nella parte bonus dovremo fare un programma che ci permetta di scrivere 
    a schermo le mosse da fare. 
     */

../

void check_move(char *cmd, t_stack *stack)
{
    if (cmd[0] == 'p' && cmd[1] == 'a' && cmd[2] == '\n')
        pa(stack);
    else if (cmd[0] == 'p' && cmd[1] == 'b' && cmd[2] == '\n')
        pb(stack);
    else if (cmd[0] == 's' && cmd[1] == 'a' && cmd[2] == '\n')
        sa(stack);
    else if (cmd[0] == 's' && cmd[1] == 'b' && cmd[2] == '\n')
        sb(stack);
    else if (cmd[0] == 'r' && cmd[1] == 'a' && cmd[2] == '\n')
        ra(stack);
    else if (cmd[0] == 'r' && cmd[1] == 'b' && cmd[2] == '\n')
        rb(stack);
    else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == '\n')
        rr(stack);
    else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == 'a' && cmd[3] == '\n')
        rra(stack);
    else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == 'b' && cmd[3] == '\n')
        rrb(stack);
    else if (cmd[0] == 'r' && cmd[1] == 'r' && cmd[2] == 'r' && cmd[3] == '\n')
        rrr(stack);
    else
        ft_error(stack);