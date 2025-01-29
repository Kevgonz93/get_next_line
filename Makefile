NAME = libgnl

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

OBJS = ${SRCS:.c=.o} 

all: $(NAME)

$(NAME): $(OBJS)
		ar -csr $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	rm -f bonus_complete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
