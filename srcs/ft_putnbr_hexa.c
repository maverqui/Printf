/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:33:55 by maverqui          #+#    #+#             */
/*   Updated: 2024/01/12 17:17:24 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_hexa(unsigned long n, char c)
{
	char			*hexa_base;
	unsigned long	new_n;
	int				i;

	hexa_base = "0123456789ABCDEF";
	if (c == 'x')
		hexa_base = "0123456789abcdef";
	i = 0;
	new_n = n;
	if (new_n >= 16)
		i += ft_putnbr_hexa(new_n / 16, c);
	i += ft_putchar((hexa_base[new_n % 16]));
	return (i);
}
