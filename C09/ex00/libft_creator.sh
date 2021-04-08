gcc -Wall -Wextra -Werror -c ft*.c
ar rc libft.a *.o
find . -name "*.o" -delete
