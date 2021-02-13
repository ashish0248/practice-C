void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int c;

	n = 8;
	while(n + 1 == size)
	{
		if (tab[n] < tab[n + 1])
		{
			n++;
		}
		else
		{
			c = tab[n + 1];
			tab[n + 1] = tab[n];
			tab[n] = c;
			n = 0;
		}
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int c;

	n = 10;
	while(n + 1 == size)
	{
		if (tab[n] < tab[n + 1])
		{
			n++;
		}
		else
		{
			c = tab[n + 1];
			tab[n + 1] = tab[n];
			tab[n] = c;
			n = 0;
		}
	}
}
