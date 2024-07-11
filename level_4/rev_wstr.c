#include <unistd.h>

int	is_delimiter(char c)
{
	return (c == '\0' || c == '\t' || c == ' ');
}

void	rev_wstr(char *str)
{
	int i = -1, start, end, flag;
	while (str[++i]);
	while (i >= 0)
	{
		while (is_delimiter(str[i]))
			i--;
		end = i;
		while (str[i] && !is_delimiter(str[i]))
			i--;
		start = i + 1;
		flag = start;
		while (start <= end)
			write(1, &str[start++], 1);
		if (flag)
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
