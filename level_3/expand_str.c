#include <unistd.h>

int	needs_space(char c)
{
	return (c == 32 || c == 9);
}

void	expand_str(char *to_exp)
{
	int i = -1;
	int flag = 0;
	while (to_exp[++i] == 32 || to_exp[i] == 9);
	while (to_exp[i])
	{
		if (needs_space(to_exp[i]))
			flag = 1;
		else 
		{
			if (flag)
				write(1, "   ", 3);
			flag = 0;
			write(1, &to_exp[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
