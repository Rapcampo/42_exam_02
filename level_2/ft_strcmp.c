#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int i = -1;
	while ((s1[++i] && s2[i]) && s1[i] == s2[i]);
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}
