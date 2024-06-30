#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int i = -1;
	while(str[++i]);
	return (i);
}

char *ft_strdup(const char *str)
{
	int i = -1;
	char *dup;
	dup = (char *)malloc(ft_strlen(str) * sizeof(char *) + 1);
	while (str[++i])
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}

int	main(int argc, char **argv)
{
	char *dup = ft_strdup(argv[1]);
	if (argc == 2)
	{
		printf("%p\n", argv[1]);
		printf("%p\n", dup);
		printf("%s\n", dup);
		printf("\n\n\nthis is from original -> %p\n", strdup(argv[1]));
		printf("\n\n\nthis is from original -> %s\n", strdup(argv[1]));
	}
	if (dup)
		free(dup);
	return (0);
}
