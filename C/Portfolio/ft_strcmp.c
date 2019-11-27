#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "World";
	printf("diff = %d\n", ft_strcmp(str1, str2));
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i, j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i -j);
}
