#include <stdio.h>
#include <unistd.h>

void	is_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	print_16_hex(unsigned char c)
{
	is_printable("0123456789abcdef"[c / 16]);
	is_printable("0123456789abcdef"[c % 16]);
}

void	print_address(unsigned long addr, int depth)
{
	char mod;

	if (depth == 16)
		return ;
	else
	{
		mod = "0123456789abcdef"[addr % 16];
		print_address(addr / 16, depth + 1);
		write(1, &mod, 1);
		if (depth == 0)
			write(1, ":", 1);
	}
}

void	print_xxd(char *str, unsigned int idx, unsigned int size)
{
	while (idx < 16)
	{
		if (idx % 2 == 0)
			is_printable(' ');
		if (idx >= size)
			write(1, "  ", 2);
		else
			print_16_hex(str[idx]);
		idx++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int idx;
	char *address;

	address = (char *)addr;
	while (size > 0)
	{
		idx = 0;
		print_address((unsigned long)addr, 0);
		print_xxd(address, idx, size);
		write(1, " ", 1);
		while (idx < 16 && idx < size)
		{
			is_printable(address[idx]);
			idx++;
		}
		write(1, "\n", 1);
		address += idx;
		size -= idx;
	}
	return (addr);
}

int		main(void)
{
	char str[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	void *addr = (void *)str;
	ft_print_memory(addr, 92);
}
