#include <stdio.h>

int	main()
{
	int Grade = 60;
	int Semestre = 1;
	if (Grade < 50) // Asking whether Grade is smaller than 50.
	{
		printf("You Lose!\n"); // Evaluate if true.
	}
	else if (Grade == 50) // Asking whether Grade is equal to 50.
	{
		printf("Right in the Middle!\n");
	}
	else // If non of the above conditions are true.
	{
		printf("You Win!\n"); // Evaluate if true.
	}
	/*
	< Less than
	<= Less than or equal to
	> Greater than
	>= Greater than or equal to
	== Equal to
	!= Not equal to

	Y = (X >= 5) ?  5 : X; This is equivalent to:
	if (X >= 5)
		Y = 5;
	else
		Y = X;

	You can use logical operators to add more conditional ranges.
	AND LOGIC = if (N > 0 && N <= 100) 
  	printf("Range (1 - 100).");

	OR LOGIC = if (Char == 'x' || Char == 'X')
	printf("Roman numeral value is 10.");

	NOT LOGIC if (!(N == 'x' || N == 'X'))
	printf("Roman numeral is not 10.\n");
	*/

	switch (Grade) // Comparing Grade variable with cases.
	{
		case 50:
			printf("Grade is 50");
			break; // If match break out of the switch statement.
		case 100:
			printf("Grade is");
			break;
		default: // Evaluate if no case match.
			printf("Not 50 or 100");
	}
	return (0);
}
