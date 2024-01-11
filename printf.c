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

static int	ft_conversion(va_list *arg, char nxt)
{
	int		size;
	char	c;

	size = 0;
	if (nxt == 'c')
		size += ft_putchar(va_arg(*arg, int));
	else if (nxt == 's')
		size += ft_putstr(va_arg(*arg, char *));
	// else if (nxt == 'p')
	// {
	// 	nb = va_arg(arg, unsigned int);
	// 	return (write(1, nb, 1));
	// }
	else if (nxt == 'i' || nxt == 'd')
		size += ft_putnbr(va_arg(*arg, int));
	else if (nxt == 'u')
		size += ft_putnbr_unsigned(va_arg(*arg, unsigned int));
	else if (nxt == 'x' || nxt == 'X')
		size += ft_putnbr_hexa(va_arg(*arg, unsigned int), nxt);
	else
	{
		size += write(1, "%", 1);
		if (nxt != '%')
			size += ft_putchar(nxt);
	}
	return (size);
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
            size += ft_conversion(&arg, format[i]);
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

int main()
{
	printf("ft_print len = %d\n", ft_printf("%D\n"));
	printf("print len = %d\n", printf("%D\n"));
}