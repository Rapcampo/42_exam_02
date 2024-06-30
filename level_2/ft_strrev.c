#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = -1;
	while (str[++i]);
	return (i);
}

char *ft_strrev(char *to_rev)
{
	int start = -1;
	int end = ft_strlen(to_rev);
	while (++start < end--)
	{
		to_rev[start] = to_rev[start] ^ to_rev[end];
		to_rev[end] = to_rev[start] ^ to_rev[end];
		to_rev[start] = to_rev[start] ^ to_rev[end];
	}
	return (to_rev);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strrev(argv[1]));
	printf("\n");
	return (0);
}
