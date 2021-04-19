CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = bsq 
SRCDIR = srcs
INCLUDE = -Iincludes
SOURCES = $(addprefix $(SRCDIR)/, bsq.c info.c main.c map.c print.c max_square.c)
OBJECTS = $(SOURCES:.c=.o)

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ $^

%.o : %.c
	$(CC) -c $(CFLAGS) $< $(INCLUDE) -o $@

clean :
	rm -f $(OBJECTS)

fclean :
	rm -f $(TARGET) $(OBJECTS)

re : fclean all
