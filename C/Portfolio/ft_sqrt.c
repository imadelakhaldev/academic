#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int	nb = 2;
	printf("sqrt %d = %d\n", nb, ft_sqrt(nb));
	return (0);
}

int		ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	else
	{
		int i = 1;
		while ((i * i) < nb)
			i++;
		if ((i * i) == nb)
			return (i);
		else
			return (0);
	}
	return (0);
}
