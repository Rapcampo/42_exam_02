#include <unistd.h>

int	ft_strchr(char *str, char c)
{
	int i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	char seen[256] = {0};
	int i = -1;
	int j = 0;
	while (s1[++i])
	{
		if (!ft_strchr(seen, s1[i]))
		{
			seen[j++] = s1[i];
			write(1, &s1[i], 1);
		}
	}
	i = -1;
	while (s2[++i])
	{
		if (!ft_strchr(seen, s2[i]))
		{
			seen[j++] = s2[i];
			write(1, &s2[i], 1);
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
