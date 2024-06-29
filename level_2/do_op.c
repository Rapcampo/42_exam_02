#include <stdio.h>
#include <stdlib.h>


int	do_op(int numA, char op, int numB)
{
	if (op == '+')
		return (numA + numB);
	if (op == '-')
		return (numA - numB);
	if (op == '*')
		return (numA * numB);
	if (op == '/')
		return (numA / numB);
	else
		return (numA % numB);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", do_op(atoi(argv[1]), argv[2][0], atoi(argv[3])));
	}
	return (0);
}
