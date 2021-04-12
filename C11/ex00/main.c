#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

int		main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_foreach(array, 9, &ft_putnbr);
}
