#include <stdio.h>

int	ft_isspace(char c)
{
	return (c >= 9 && c <= 13 || c == 32);
}

int ft_check(int c, int str_base)
{
	char *lcbase = "0123456789abcdef";
	char *ucbase = "0123456789ABCDEF";
	int i = -1;
	while (++i < str_base)
	{
		if (c == lcbase[i] || c == ucbase[i])
			return (1);
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0, sign = 1, i = -1;
	while (ft_isspace(str[++i]));
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && ft_check(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * sign);

}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", ft_atoi_base(argv[1], ft_atoi_base(argv[2], 10)));
	}
	printf("\n");
	return (0);
}
