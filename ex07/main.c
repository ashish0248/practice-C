void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int str [];
	int *tab;
	int size;

	str[0] = 5;
	str[1] = 2;
	str[2] = 1;
	str[3] = 0;
	size = 4;
	tab = &str[0];
	ft_rev_int_tab(tab, size);
	return (0);
}
