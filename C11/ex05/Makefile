CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = do-op
SRCDIR = srcs
INCDIR = -Iincludes
SOURCES = $(addprefix $(SRCDIR)/, ft_atoi.c ft_error.c ft_do_op.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< $(INCDIR) -o $@

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCDIR) -o $@ $^

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(TARGET) $(OBJECTS)

re: fclean all
