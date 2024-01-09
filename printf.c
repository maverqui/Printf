/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maverqui <maverqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:33:18 by maverqui          #+#    #+#             */
/*   Updated: 2024/01/09 17:33:18 by maverqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_conversion(va_list arg, char nxt)
{
	char	c;
	char	*str;
	unsigned int	nb;
	char *nb_str;

	if (nxt == '%')
		return (write(1, '%', 1));
	else if (nxt == 'c')
	{
		c = va_arg(arg, char);
		return (write(1, &c, 1));
	}
	else if (nxt == 's')
	{
		str = va_arg(arg, char*);
		return (write(1, str, ft_strlen(str)));
	}
	// else if (nxt == 'p')
	// {
	// 	nb = va_arg(arg, unsigned int);
	// 	return (write(1, nb, 1));
	// }
	else if (nxt == 'd')
	{
		nb = va_arg(arg, int);
		*nb_str = ft_itoa(nb);
		return (write(1, nb_str, ft_strlen(nb_str)));
	}
	else if (nxt == 'i')
	{
		nb = va_arg(arg, int);
		*nb_str = ft_itoa(nb);
		return (write(1, nb_str, ft_strlen(nb_str)));
	}
	else if (nxt == 'u')
	{
		c = va_arg(arg, char);
		return (write(1, &c, 1));
	}
	else if (nxt == 'x')
	{
		c = va_arg(arg, char);
		return (write(1, &c, 1));
	}
	else if (nxt == 'X')
	{
		c = va_arg(arg, char);
		return (write(1, &c, 1));
	}
}

int	ft_printf(const char *format, ...)
{
    int i;
    int size;
    va_list arg;

    i = 0;
    size = 0;
    va_start(arg, format);

    while (format[i] != '\0')
    {
       if (format[i] == '%')
       {
			i++;
            size += ft_conversion(arg, format[i]);
       }
	   else
	   {
			write(1, &format[i], 1);
			size++;
	   }
       i++;
    }
    va_end(arg);
	return (size);
}
