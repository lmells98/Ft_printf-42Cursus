CFLAGS	= -Wall -Werror -Wextra
CC		= gcc

NAME	= libftprintf.a
INCS	= ./includes/
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)

LIB_DIR	= ./srcs/libft
LIB		= $(LIB_DIR)/libft.a

AR		= ar rcs
RM		= rm -rf
TEST	= test

all: $(NAME)

$(NAME): $(LIB) $(OBJS)
	$(AR) $@ $(OBJS)

$(LIB):
	make -C $(LIB_DIR)
	cp $@ $(NAME)

$(TEST): $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o $@
	./test

clean:
	$(RM) $(OBJS)
	$(RM) $(TEST)
	make -C $(LIB_DIR) fclean

fclean: clean
	$(RM) $(NAME)

re: clean fclean all test
