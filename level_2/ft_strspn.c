#include <stdio.h>
#include <string.h>

char *ft_strchr(char *s, char c)
{
	int i = -1;
	while(s[++i])
		if (s[i] == c)
			return ((char *)s);
	return (0);
}

size_t	ft_strspn(char *str, char *accept)
{
	int i = -1;
	int j = -1;
	size_t count = 0;
	while (str[++i])
	{
		if (ft_strchr(accept, str[i]) == 0)
			return(count);
		count++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%zu\n", ft_strspn(argv[1], argv[2]));
		printf("this is the original ->%zu\n", strspn(argv[1], argv[2]));
	}
	return (0);
}
