#include <stdio.h>

size_t	ft_strcspn(const char *str, const char *reject)
{
	int i = -1;
	int j = -1;
	while (str[++i])
	{
		while (reject[++j])
			if (str[i] == reject[j])
				return (i);
		j = -1;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%zu\n", ft_strcspn(argv[1], argv[2]));
	return (0);
}
