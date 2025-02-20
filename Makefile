NAME = libgnl.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS_MAIN = get_next_line.c get_next_line_utils.c
SRCS_AUX = ${wildcard aux/*.c}
SRCS_ALL = $(SRCS_MAIN) $(SRCS_AUX)

BONUS_NAME = bonus/libgnl_bonus.a

BONUS_MAIN = bonus/get_next_line_bonus.c bonus/get_next_line_utils_bonus.c
BONUS_ALL = $(BONUS_MAIN) $(SRCS_AUX)

OBJS_ALL = $(SRCS_ALL:.c=.o)
OBJS_BONUS_ALL = $(BONUS_ALL:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_ALL)
		ar rcs $(NAME) $(OBJS_ALL)
		
bonus: $(BONUS_NAME)

$(BONUS_NAME) : $(OBJS_BONUS_ALL)
		ar rcs $(BONUS_NAME) $(OBJS_BONUS_ALL)

bonus/%.o: bonus/%.c
	$(CC) $(CFLAGS) -c $< -o $@

aux/%.o: aux/%.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_ALL) $(OBJS_BONUS_ALL)

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUS_NAME)

re: fclean all

.PHONY: all bonus clean fclean re
