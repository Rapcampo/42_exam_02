#include <unistd.h>

void	ft_putstr(char *to_print)
{
	int i = -1;
	while (to_print[++i])
		write(1, &to_print[i], 1);
}

void	wdmatch(char *str1, char *str2)
{
	int i = -1;
	int j = 0;
	while (str2[++i])
	{
		if (str2[i] == str1[j])
			j++;
		if (!str1[j])
		{
			ft_putstr(str1);
			break;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
