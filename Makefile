NAME = libftprintf.a

SOURCE = ft_printf.c libft/ft_putstr.c libft/ft_adresse.c \
		 libft/ft_putnbr.c libft/ft_putnbr_hexa.c \
		 libft/ft_putnbr_unsigned.c libft/ft_putchar.c \

OBJS = ${SOURCE:.c=.o}

HEAD = ft_printf.h

AR = ar rc

RM = rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror

.PHONY: all re clean fclean

${NAME}: ${OBJS} ${HEAD}
	${CC} ${CFLAGS} -c ${SOURCE}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} $(OBJSBONUS)

fclean: clean
	${RM} ${NAME}

re: fclean all
