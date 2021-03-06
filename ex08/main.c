
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int str [10];
	int *tab;
	int size;
	int n;

	str[0] = 4;
	str[1] = 8;
	str[2] = 2;
	str[3] = 1;
	size = 4;
	tab = &str[0];
	ft_sort_int_tab(tab, size);

	n = 0;
	while(n < size + 1)
	{
		printf("%d", str[n]);
		n++;
	}
	
	return (0);
}
