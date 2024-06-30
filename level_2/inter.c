#include <unistd.h>

int	ft_strchr(char *str, char c)
{
	int i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

void	inter(char *found, char *to_find)
{
	int i = -1;
	char print[128] = {0};
	while (found[++i])
	{
		if ((ft_strchr(to_find, found[i])) && !ft_strchr(print, found[i]))
		{
			print[i] = found[i];
			write(1, &found[i], 1);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
