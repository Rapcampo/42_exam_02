#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = -1;
	int num = 0;
	int sign = 1;
	while (str[++i] == ' ' || (str[i] >= 9 && str[i] <= 13));
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		num = num * 10 + (str[i++] - '0');
	return (num * sign);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
	printf("\n");
	return (0);
}
