NAME = libftprintf.a

SRCS = libftprintf.c libftprintf_utils.c printf_utils.c

HEADER = ft_printf.h

CC = gcc

FLAGS = -Wextra -Wall -Werror

OBJS = ${SRCS:%.c=%.o}

all: ${NAME}

${NAME}	: ${OBJS}
		ar rcs ${NAME} ${OBJS} $?

%.o		: %.c ${HEADER}
		 $(CC) $(FLAGS) $(SRCS) -c

clean	:
		rm -f ${OBJS}

fclean	: clean
		rm -f ${NAME}

re		: fclean all

.PHONY	: all clean fclean re