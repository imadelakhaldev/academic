#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int	nb = 5;
	printf("factorial %d = %d\n", nb, ft_recursive_factorial(nb));
	return (0);
}

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
