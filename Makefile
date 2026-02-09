NAME = libft.a

CC = cc

FLAGS = -Wall -Werror -Wextra -c

RM = rm -f

AR = ar rc

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h Makefile
	$(CC) $(FLAGS) $< -o $@

.PHONY: all clean fclean re