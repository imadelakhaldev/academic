#include <unistd.h>

void		ft_putchar(char c);
void		ft_is_negative(int n);

int		main(void)
{
	int	n = 1;
	ft_is_negative(n);
	ft_putchar('\n');
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
