#include <unistd.h>

int	is_space(char c)
{
	return (c >= 9 && c <= 13 || c == 32);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_captilizer(char *str)
{
	int	i = -1;
	while (is_space(str[++i]));
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && is_space(str[i - 1]))
			str[i] -= 32;
		ft_putchar(str[i]);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	if (argc > 1)
		while (argv[++i])
			str_captilizer(argv[i]);
	else
		write(1, "\n", 1);
	return (0);
}
