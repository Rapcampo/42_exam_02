#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int i = -1, diff = abs(end - start) + 1;
	int *range = (int *)malloc(sizeof(int) * (diff) + 1);
	while (++i < diff)
	{
		if (start > end)
			range[i] = end++;
		else
			range[i] = end--;
	}
	return (range);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int *to_print;
		if (atoi(argv[1]) < atoi(argv[2]))
			to_print = ft_range(atoi(argv[1]), atoi(argv[2]));
		else 
			to_print = ft_range(atoi(argv[2]), atoi(argv[1]));
		while (*to_print)
			printf("%d", *to_print++);
	}
	printf("\n");
	return (0);
}
