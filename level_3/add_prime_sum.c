#include <unistd.h>

int	ft_atoi(char *s)
{
	int	nbr = 0;
	int i = -1;
	while (s[++i])
		nbr = nbr * 10 + s[i] - 48;
	return (nbr);
}

int	is_prime(int num)
{
	int i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
		if (num % i++ == 0)
			return (0);
	return (1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	add_prime_sum(int nbr)
{
	int sum = 0;
	while (nbr > 0)
	{
		if (is_prime(nbr))
			sum += nbr;
		nbr--;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		add_prime_sum(ft_atoi(argv[1]));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
