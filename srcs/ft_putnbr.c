/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:55:40 by maverqui          #+#    #+#             */
/*   Updated: 2024/01/12 16:22:59 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int n)
{
	long	new_n;
	int		i;

	i = 0;
	new_n = n;
	if (n < 0)
	{
		i += ft_putchar('-');
		new_n = -new_n;
	}
	if (new_n >= 10)
		i += ft_putnbr(new_n / 10);
	i += ft_putchar((new_n % 10) + '0');
	return (i);
}
