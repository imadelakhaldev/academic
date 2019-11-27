#include <unistd.h>
#include <stdlib.h>

void		ft_putstr(char *str);
char		*ft_strdup(char *str);

int		main(void)
{
	char	str[] = "Hello World!";
	ft_putstr(ft_strdup(str));
	write(1, "\n", 1);
}

void		ft_putstr(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char		*ft_strdup(char *str)
{
	char	*dup;
	int	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * i);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
