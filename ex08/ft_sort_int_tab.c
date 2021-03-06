#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int c;

	c = 0;
	n = 0;
	while (n < size)
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
