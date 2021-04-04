#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

# define COL 0
# define ROW 1
# define TRUE 1
# define FALSE 0
# define UP 1
# define DOWN -1
# define LEFT 1
# define RIGHT -1

int g_size;

// process.c
void	ft_first_process(int *input, int **map, int ***flag);
void	ft_row_max(int idx, int **map, int ***flag);
void	ft_col_max(int idx, int **map, int ***flag);
void	ft_col_row_1(int idx, int **map, int ***flag);
void	ft_put_map(int idx, int **map, int ***flag, int value);

// algorithm.c
int		**ft_last_process(int idx, int *input, int **map, int ***flag);
void	ft_logic(int *input, int **map, int ***flag);

// check.c
int		ft_check(int *input, int **map);
int		ft_col_count(int col, int **map, int dir);
int		ft_row_count(int row, int **map, int dir);

// rush01.c
int		malloc_for_map(int ***map);
int		malloc_for_flag(int ****flag);
void	malloc_free(int *input, int **map, int ***flag);

// input.c
int		is_non_charset(char c, char *charset);
int		ft_word_count(char *str, char *charset);
int		ft_sqrt(int word_size);
int		*ft_split(char *str, char *charset);
int		count(int *input);

// print.c
void	ft_putchar(char c);
void	ft_print_map(int **map);
int		ft_error(void);

#endif
