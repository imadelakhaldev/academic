#include <stdio.h>

void		ft_ft(int *nbr);

int		main(void)
{
	int	n = 1;
	int	*nbr = &n;
	ft_ft(nbr);
	printf("n = %d\n", n);
}

void		ft_ft(int *nbr)
{
	*nbr = 42;
}
