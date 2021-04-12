#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_sort(int num1, int num2)
{
	return (num1 > num2 ? 1 : -1);
}

int		main(void)
{
	int sort[5] = {1, 2, 3, 4, 5};
	int sort2[5] = {4, 1, 2, 3, 4};
	int sort3[5] = {1, 1, 1, 1, 1};
	int sort4[5] = {1, 2, 4, 3, 5};

	printf("%d\n", ft_is_sort(sort, 5, &ft_sort));
	printf("%d\n", ft_is_sort(sort2, 5, &ft_sort));
	printf("%d\n", ft_is_sort(sort3, 5, &ft_sort));
	printf("%d\n", ft_is_sort(sort4, 5, &ft_sort));
}
