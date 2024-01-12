/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:24:37 by maverqui          #+#    #+#             */
/*   Updated: 2024/01/11 19:24:37 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int 			ft_printf(const char *format, ...);
int				ft_adresse(void *n);
int				ft_putnbr_hexa(unsigned long n, char c);
unsigned int	ft_putnbr_unsigned(unsigned int n);
int				ft_putstr(char *s);
int				ft_putchar(char c);
int				ft_putnbr(int n);

#endif