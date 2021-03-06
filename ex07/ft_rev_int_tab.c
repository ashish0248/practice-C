#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int number[size];
	int *q;
	int i = 0;

	i = 0;
	q = &number[0];
	while(tab[i] != '\0')
	{
		number[i] = tab[i];
		i++;
	}
	number[size] = '\0';
	
	i = 0;
	while(size == 0)
	{
		tab[i] = number[size - 1];
		i++;
		size--;
	}
}
