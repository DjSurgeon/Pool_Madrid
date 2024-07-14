#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	*rev_tab;
	int	i;
	int	j;

	i = *tab;
	j = size - 1;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = rev_tab[j];
		rev_tab[j] = swap;
		i++;
		j--;
	}
}

int main(void)
{
	int	size;
	int 	tab[size];

	size = 6;
	tab[size] = {10, 52, 35, 61, 7, 47};

	ft_rev_int_tab(tab, size);
	return(0);
}
