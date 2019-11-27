#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int	nb = 5;
	printf("factorial %d = %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}

int		ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		int i = nb;
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
		return (nb);
	}
	return (0);
}
