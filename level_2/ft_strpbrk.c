#include <stdio.h>
#include <string.h>

char *ft_strpbrk(char *str, char *accept)
{
	int i = -1;
	int j = -1;
	while (str[++i])
	{
		while (accept[++j])
			if (str[i] == accept[j])
				return (&str[i]);
		j = -1;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%p\n", ft_strpbrk(argv[1], argv[2]));
		printf("this is the original -> %p", strpbrk(argv[1], argv[2]));
	}
	return (0);
}
