#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[10] = "hello";
	char dest[10];
	
	printf("%s\n", strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest, src, 6));
}
