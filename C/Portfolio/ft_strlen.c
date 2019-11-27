#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "Hello World!";
	printf("strlen = %d\n", ft_strlen(str));
}
int		ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
