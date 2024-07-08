#include <stdio.h>
#include <stdlib.h>

int	gcd(int a, int b)
{
	return(b ? gcd(b, a % b) : a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	return ((a * b) / gcd(a, b));
}

/*unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
	 	n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}*/

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", lcm(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
