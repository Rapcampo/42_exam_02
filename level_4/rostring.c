#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
	return (c == 32 || c == '\t');
}

void	rostring(char *str)
{
	int i = -1, fw_start, fw_end;
	while (is_space(str[++i]));
	fw_start = i;
	while(str[i] && !is_space(str[i++]));
	fw_end = i - 1;
	if (str[i])
	{
		while (str[i])
		{
			if (is_space(str[i]))
			{
				while(is_space(str[i]))
					i++;
				if (str[i])
					write(1, " ", 1);
			}
			else
				write(1, &str[i++], 1);
		}
		write(1, " ", 1);
	}
	while (fw_start < fw_end)
		write(1, &str[fw_start++], 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	if (argc == 1)
		write(1, "\n", 1);
	else
		while (argv[++i])
			rostring(argv[i]);
	return (0);
}
