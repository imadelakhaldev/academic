#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int	*range = ft_range(1, 10);
	int	i = 0;
	while (range[i])
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}

int		*ft_range(int min, int max)
{
	if (min < max)
	{
		int	i = 0;
		int	*range = malloc(sizeof(int) * max);
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
		range[i] = '\0';
		return (range);
	}
	else
		return (NULL);
}
