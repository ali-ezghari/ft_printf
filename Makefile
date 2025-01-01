CC = cc
FLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f
SRCS =	ft_printf.c print_hex.c\
		print_addr.c print_un.c \
		print_num.c utils.c

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re