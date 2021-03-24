#include <unistd.h>

void	ft_print_comb(void)
{
	char comb[4];

	comb[0] = '0';
	comb[3] = '\0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				write(1, comb, 3);
				if (comb[0] != '7')
					write(1, ", ", 2);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}

int	main()
{
	ft_print_comb();

	return (0);
}		
