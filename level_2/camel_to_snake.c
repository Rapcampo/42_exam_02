#include <unistd.h>


void	camel_to_snake(char *to_snake)
{
	int i = -1;
	while(to_snake[++i])
	{
		if (to_snake[i + 1] >= 'A' && to_snake[i + 1] <= 'Z')
		{
			write(1, &to_snake[i], 1);
			write(1, "_", 1);
		}
		else if (to_snake[i] >= 'A' && to_snake[i] <= 'Z')
		{
			to_snake[i] += 32;
			write(1, &to_snake[i], 1);
		}
		else 
			write(1, &to_snake[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
