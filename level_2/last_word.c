#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = -1;
	while(str[++i]);
	return (i - 1);
}

void	last_word(char *str)
{
	int rev_i = ft_strlen(str);
	int i;
	while (str[rev_i] == 9 || str[rev_i] == 32)
		rev_i--;
	while (str[rev_i--])
	{
		if (str[rev_i - 1] == 9 || str[rev_i - 1] == 32)
		{
			i = rev_i;
			break;
		}
	}
	while (str[i] && str[i] != 9 && str[i] != 32)
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
