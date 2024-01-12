NAME = libftprintf.a

SOURCE =	srcs/ft_printf.c\
			srcs/ft_putstr.c \
			srcs/ft_adresse.c \
		 	srcs/ft_putnbr.c\
			srcs/ft_putnbr_hexa.c\
			srcs/ft_putnbr_unsigned.c\
			srcs/ft_putchar.c \

OBJS = ${SOURCE:.c=.o}

AR = ar rc

RM = rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror -I./include

.PHONY: all re clean fclean

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} $(OBJSBONUS)

fclean: clean
	${RM} ${NAME}

re: fclean all
