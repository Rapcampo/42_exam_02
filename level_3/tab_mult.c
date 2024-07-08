#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = -1, nbr = 0;
	while(str[++i])
		nbr = nbr * 10 + (str[i] - '0');
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

void	tab_mult(int nbr)
{
	int i = 0;
	while (++i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(i * nbr);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(ft_atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}
