/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:42:39 by maverqui          #+#    #+#             */
/*   Updated: 2024/01/12 17:17:10 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_adresse(void *n)
{
	int	size;

	if (!n)
		return (ft_putstr("(nil)"));
	size = 0;
	size += write(1, "0x", 2);
	size += ft_putnbr_hexa((unsigned long)n, 'x');
	return (size);
}
