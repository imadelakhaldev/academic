#include <stdio.h>

void		ft_swap(int *a, int *b);


int		main(void)
{
	int	n1 = 1;
	int	n2 = 2;
	int	*a = &n1;
	int	*b = &n2;
	ft_swap(a, b);
	printf("n1 = %d\nn2 = %d\n", n1, n2);
}

void		ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
