#include <unistd.h>

void	epur_str(char *str)
{
	int i = -1;
	int space_flag = 0;
	while (str[++i] == 32 || str[i] == 9);
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 9)
			space_flag = 1;
		if (str[i] != 32 && str[i] != 9)
		{
			if (space_flag)
				write(1, " ", 1);
			space_flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}

}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
