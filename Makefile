
NAME = GNL.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = get_next_line.c \
	get_next_line_utils.c

OBJS = ${SRCS:.c=.o} 

all: $(NAME)

$(NAME): $(OBJS)
		ar -csr $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
