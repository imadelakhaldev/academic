#include <stdio.h>
#include <stdlib.h>

// Prototypes.
int		letter_frequency(char *array, char letter);
char		*get_letters(char *array);

// Driver Function.
int		main(void)
{
	char	array[20], letter;

	printf("Enter an Array of letters: ");
	if(fgets(array, 20, stdin) == NULL) // Using FGETS instead of GETS (not safe) and SCANF (stops at whitespace).
	{
		printf("Invalid Input :(");
		exit(EXIT_FAILURE);
	}
	for(int	i = 0; get_letters(array)[i] != '\n'; i++)
		printf("Frequency of '%c' = %d.\n", get_letters(array)[i], letter_frequency(array, get_letters(array)[i]));

	return (0);
}

// Frequency Counter Function.
int		letter_frequency(char *array, char letter)
{
	int	freq = 0;

	for(int i = 0; array[i] != '\0'; i++)
		if(array[i] == letter)
			freq++;
	return (freq);
}

// Unique Letters Extractor Function.
char		*get_letters(char *array)
{
	int	isUnique = 0;
	int	size = 2;
	char	*letters = malloc(sizeof(char) * size);

	letters[0] = array[0];
	letters[1] = '\0';
	
	for(int	i = 0; array[i] != '\0'; i++)
	{
		for(int	j = 0; letters[j] != '\0'; j++)
		{
			if(array[i] != letters[j])
				isUnique = 1;
			else
			{
				isUnique = 0;
				break;
			}
		}
		if(isUnique)
		{
			isUnique = 0;
			size++;
			letters = realloc(letters, sizeof(char) * size);
			letters[size - 2] = array[i];
			letters[size - 1] = '\0';
		}
	}

	return (letters);
}
