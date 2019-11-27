#include <unistd.h>

void		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
