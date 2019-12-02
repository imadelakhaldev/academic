#include <stdio.h>
#include <stdlib.h>

// Prototypes.
char		*sort_array(char *array);

// Driver Function.
int		main(void)
{
	char	current_char;
	char	array[21];

	printf("Enter a 20 number long Array of 0's, 1's and 2's:\n");
	for(int	i = 0; i < 20; i++)
	{
		printf("Number %d: ", i + 1);
		scanf(" %c", &current_char);
		if(current_char > 50 || current_char < 48)
		{
			printf("Invalid Input :(\n");
			exit(EXIT_FAILURE);
		}
		array[i] = current_char;
	}
	array[20] = '\0';
	printf("After sorting: %s.\n", sort_array(array));

	return (0);
}

// Array Sorting Function.
char		*sort_array(char *array)
{
	char	*sorted_array;
	int	sorted_0_size = 0;
	int     sorted_1_size = 0;
	int     sorted_2_size = 0;
	int	index = 0;

	for(int	i = 0; array[i] != '\0'; i++)
	{
		if(array[i] == 48)
		{
			sorted_0_size++;
		}
		else if (array[i] == 49)
		{
			sorted_1_size++;
		}
		else
		{
			sorted_2_size++;
		}
	}
	sorted_array = malloc(sizeof(char) * (sorted_0_size + sorted_1_size + sorted_2_size + 1));
	for(int	i = 0; i < sorted_0_size; i++)
	{
		sorted_array[index] = '0';
		index++;
	}
	for(int i = 0; i < sorted_1_size; i++)
	{
		sorted_array[index] = '1';
		index++;
	}
	for(int	i = 0; i < sorted_2_size; i++)
	{
		sorted_array[index] = '2';
		index++;
	}
	sorted_array[index] = '\0';

	return (sorted_array);
}
