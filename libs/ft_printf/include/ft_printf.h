/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:58:00 by pfalasch          #+#    #+#             */
/*   Updated: 2023/02/06 14:41:20 by pfalasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *str, ...);
int			ft_print_unsigned(unsigned int nbr);
int			ft_print_ptr(unsigned long ptr);
int			ft_print_hex_upper(unsigned int nbr);
int			ft_print_hex_lower(unsigned int nbr);
int			ft_printstr(char *str);
int			ft_printnbr(int nbr);
int			ft_printpercent(void);
void		ft_putchar(char c);

#endif