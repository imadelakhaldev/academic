#include <unistd.h>

void		ft_putchar(char c);
void		ft_print_alphabet(void);

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_alphabet(void)
{
	char	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
