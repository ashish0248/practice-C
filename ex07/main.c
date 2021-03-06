#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int str [4];
	int *tab;
	int size;
	int n;

	str[0] = 3;
	str[1] = 2;
	str[2] = 1;
	str[3] = 0;
	size = 5;
	tab = &str[0];
	ft_rev_int_tab(tab, size);

	n = 0;
	while(n < size - 1)
	{
		printf("%d", str[n]);
		n++;
	}

	return (0);
}
