CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = BSQ
SRCDIR = srcs
SOURCES = $(addprefix $(SRCDIR)/*.c)
OBJECTS = $(addprefix $(SRCDIR)/$(SOURCES:.c=.o))

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(FLAGS) -o $@ $^

%.o : %.c
	$(CC) -c $(CFLAGS) $< -I ./includes -o $@

clean :
	rm -f $(OBJECTS)

fclean :
	rm -f $(TARGET)

re : fclean all
