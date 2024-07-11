#include <stdlib.h>
//#include <stdio.h>

char *ft_itoa(int nbr)
{
	long n, temp;
	int len = 0, sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		len++;
		n = -nbr;
	}
	else if (nbr == 0)
		return ("0\0");
	else 
		n = nbr;
	temp = n;
	while (n)
	{
		n /= 10;
		len++;
	}
	n = temp;
	char *number = (char *)malloc(sizeof(char) * (len + 1));
	if (number == NULL)
		return (NULL);
	number[len] = '\0';
	if (sign == -1)
		number[0] = '-';
	while (n)
	{
		number[--len] = n % 10 + '0';
		n /= 10;
	}
	return (number);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d this is argv\n\n\n", atoi(argv[1]));
		printf("%s this is itoa", ft_itoa(atoi(argv[1])));
	}
	return (0);
}*/
