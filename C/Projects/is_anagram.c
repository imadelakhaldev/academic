#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototypes.
int		is_anagram(char *string1, char *string2);

// Driver Function.
int		main(void)
{
	char	string1[20], string2[20];

	printf("Enter first word: ");
	if(scanf(" %s", string1) == 0)
	{
		printf("Invalid Input :(\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter second word: ");
	if(scanf(" %s", string2) == 0)
	{
		printf("Invalid Input :(\n");
		exit(EXIT_FAILURE);
	}
	if(is_anagram(string1, string2)) // Strings Outputed In Sorted Form On Purpose. Creating String Copies Will Change That.
		printf("\"%s\" and \"%s\" are anagrams.\n", string1, string2);
	else
		printf("\"%s\" and \"%s\" are not anagrams.\n", string1, string2);

	return (0);
}

// Is Anagram Function.
int             is_anagram(char *string1, char *string2)
{
	char	temp;

	if(strlen(string1) != strlen(string2))
		return(0);
	else
		// Sort Characters In String1.
		for(int	i = 0; i < string1[i]; i++)
			for(int	j = i + 1; string1[j]; j++)
			{
				if(string1[j] < string1[i])
				{
					temp = string1[j];
					string1[j] = string1[i];
					string1[i] = temp;
				}
			}
		// Sort Characters In String2.
		for(int i = 0; i < string2[i]; i++)
			for(int j = i + 1; string2[j]; j++)
			{
				if(string2[j] < string2[i])
				{
					temp = string2[j];
					string2[j] = string2[i];
					string2[i] = temp;
				}
			}
		// Comparing Results.
		for(int	i = 0; string1[i] != '\0'; i++)
			if(string1[i] != string2[i])
				return (0);
		return (1);
}
