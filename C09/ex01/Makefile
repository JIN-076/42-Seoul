CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = ./srcs
INCDIR = ./includes
SRCS = $(addprefix $(SRCDIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar cr $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INCDIR)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
