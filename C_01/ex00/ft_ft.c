#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_putchar(char c);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 54;

	ft_putchar(i);
	ft_ft(&i);
	ft_putchar(i);
	return(0);
}
