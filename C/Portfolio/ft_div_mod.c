#include <stdio.h>

void            ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int	n1;
	int	n2;
	int	*div;
	int	*mod;
	div = &n1;
	mod = &n2;
	ft_div_mod(10, 5, div, mod);
	printf("div = %d\nmod = %d\n", *div, *mod);
}

void		ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
