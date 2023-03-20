/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:28:22 by pfalasch          #+#    #+#             */
/*   Updated: 2023/03/19 12:39:26 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_atoi(const char *str, t_stack *stack)
{
    int i;
    int s;
    int res;

    i = 0;
    s = 1;
    res = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        if (res > ((res * 10) + (str[i] - '0')))
            ft_error(stack);
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * s);
}
size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}