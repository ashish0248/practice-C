
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int str [];
	int *tab;
	int size;

	str[0] = 4;
	str[1] = 3;
	str[2] = 2;
	str[3] = 1;
	size = 5;
	tab = &str[0];
	ft_sort_int_tab(tab, size);

	return (0);
}
