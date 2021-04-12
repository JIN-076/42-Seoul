#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int		ft_putmap(int nbr)
{
	return (nbr);
}

int		main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *map;
	map = ft_map(array, 9, &ft_putmap);
	int i = 0;
	while (map[i])
		printf("%d\n", map[i++]);
}
