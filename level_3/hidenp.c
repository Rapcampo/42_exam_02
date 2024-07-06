#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	int i = -1, parser = 0;
	while (s2[++i] && s1[parser])
	{
		if (s2[i] == s1[parser])
			parser++;
	}
	if (!s1[parser])
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
