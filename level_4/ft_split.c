#include <stdlib.h>

int	is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char **ft_split(char *str)
{
	int wc = 0, i = 0, j = 0, t = 0;
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i]))
			i++;
		if (str[i])
			wc++;
		while(str[i] && !is_delimiter(str[i]))
			i++;
	}
	char **split = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i]))
			i++;
		j = i;
		while (str[i] && !is_delimiter(str[i]))
			i++;
		if (i > j)
		{
			split[t] = malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(split[t++], &str[j], i - j);
		}
	}
	split[t] = NULL;
	return (split);
}
