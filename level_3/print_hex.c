#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = -1, nbr = 0;
	while (str[++i])
		nbr = nbr * 10 + (str[i] - '0');
	return (nbr);
}

void	print_hex(int nbr)
{
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &"0123456789abcdef"[nbr % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
