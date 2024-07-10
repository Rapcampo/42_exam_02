void sort_int_tab(int *tab, unsigned int size)
{
	int i = -1;
	while (++i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tab[i] ^= tab[i + 1] ^= tab[i] ^= tab[i + 1];
			i = -1;
		}
	}
}
