#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;
	while (i--)
	{
		bit = (bit << 1) | (octet & 1);
		octet >>= 1;
	}
	return (bit);
}

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main()
{
	unsigned char bit = 0;
	unsigned char res = reverse_bits((unsigned char)'a');
	print_bits(res);
	write(1, "\n", 1);
	print_bits('a');
	write(1, "\n", 1);
	return (0);
}
