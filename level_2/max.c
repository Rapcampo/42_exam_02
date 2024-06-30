#include <stdint.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int result = 0;
	int i = -1;
	while (++i < len)
		if (tab[i] > result)
			result = tab[i];
	return (0);
}

int main()
{
	int int_tab[] = {1, 3, 2, 8, 12, 4};
	printf("%d", max(int_tab, 0));
	return (0);
}
