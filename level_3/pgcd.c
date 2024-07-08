#include <stdio.h>
#include <stdlib.h>

int	gcd(int a, int b)
{
	return (b ? gcd(b, a % b) : a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", gcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
