#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n & (n - 1)) == 0;
}

int	main()
{
	printf("8 is power of two? %d\n", is_power_of_2(8));
	printf("0 is power of two? %d\n", is_power_of_2(0));
	printf("129389450 is power of two? %d\n", is_power_of_2(129389450));
	printf("1024 is power of two? %d\n", is_power_of_2(1024));
	return (0);
}
