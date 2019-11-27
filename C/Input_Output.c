#include <stdio.h> // Standard input output library ;)

int	main()
{
	char A;
	printf("Enter a character: ");
	A = getchar(); // Using getchar function to prompt user for input, and assigning value to variable A.
	printf("Entred character: ");
	putchar(A); // putchar to print single character.
	putchar('\n');

	char String[100]; // Declaring char array varaible String with 100 character size.
	printf("Enter a string: ");
	gets(String); // gets function to get user string input.
	printf("Entred string: ");
	puts(String); // puts function to print only string.
	putchar('\n');

	int X, Z;
	printf("Enter two numbers: ");
	scanf("%d", &X); // Prompt for user input with specified data type entry, in this case, integer (%d).
	scanf("%d", &Z); // Using "&Z" to specify Z current address in memory.
	printf("Entred sum: %d", X + Z);

	return (0);
}
