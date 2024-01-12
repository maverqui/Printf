/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:20:32 by maverqui          #+#    #+#             */
/*   Updated: 2024/01/12 16:22:56 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

unsigned int	ft_putnbr_unsigned(unsigned int n)
{
	long	new_n;
	int		i;

	i = 0;
	new_n = n;
	if (new_n >= 10)
		i += ft_putnbr_unsigned(new_n / 10);
	i += ft_putchar((new_n % 10) + '0');
	return (i);
}
