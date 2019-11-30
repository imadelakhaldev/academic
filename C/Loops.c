#include <stdio.h>

int	main()
{
	int Counter = 1; // Inistializing counter
	while (Counter < 8) // While condition is true, evaluate inside statements.
	{
		printf("Count is: %d\n", Counter);
		Counter++; // Increacing Counter value so it's not an infinit loop.
	}
	/*
	For Loop, executes the statements at least once before checking the condition.
	int Counter = 1;
	do
	{
		printf("Count is: %d\n", Counter);
		Counter++;
	} while (Counter < 8);

	Break is used to immediately stop and exit the loop.
	int num = 5;
	while (num > 0)
	{
		if (num == 3)
			break;
		printf("%d\n", num);
		num--;
	}
	5
	4

	Continue is used to immediately skip to the next iteration.
	int num = 5;
	while (num > 0)
	{
		num--;
		if (num == 3)
			continue;
		printf("%d\n", num);
	}
	4
	2
	1
	0
	*/
	for (int I = 0; I < 10; I++) // for loop is a loop with predefined varaibles that initialeze with it. It holds the variable initiate value, condition, and increamenet.
	{
		printf("I is: %d\n", I);
	}

	return (0);
}
