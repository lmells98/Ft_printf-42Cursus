CFLAGS	= -Wall -Werror -Wextra
CC		= gcc

NAME	= libft.a
INCS	= ./includes/.
SRCS	= ft_strlen.c ft_strchr.c ft_putstr.c
OBJS	= $(SRCS:.c=.o)

AR		= ar rcs
RM		= rm -rf

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I $(INCS) -c $<

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean fclean all
