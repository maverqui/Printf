#include "printf.h"

static int	ft_conversion(va_list arg, char nxt)
{
	char	c;

	if (nxt == '%')
		return (write(1, '%', 1));
	else if (nxt == 'c')
	{
		c = va_arg(arg, int);
		return write(1, &c, 1);
	}
	else if (nxt == 's')
		
	else if (nxt == 'p')

	else if (nxt == 'd')
	
	else if (nxt == 'i')

	else if (nxt == 'u')

	else if (nxt == 'x')

	else if (nxt == 'X')
}

int	ft_printf(const char*, ...)
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
            ft_conversion(arg, nxt); //a modifier
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
