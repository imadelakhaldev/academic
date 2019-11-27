#include <stdio.h>

int	main()
{
	int List[5] = {20, 45, 16, 18, 22}; // Initilizing array named List with size of 5 elements.
	List[1] = 260; // Applying value 260 to second element in List array.
	printf("The second element is %d\n", List[1]);
	// Output: The second element is 260

	float Purchases[3] = {10.99, 14.25, 90.50}; // Initilizing array named Purchases with size of 3 elements.
	float Total = 0;
	int I;

	// Purchases Total
	for (I = 0; I < 3; I++)
	{
  		Total += Purchases[I]; // Adding value of each element to Total.
	}
	printf("Purchases total is %0.2f\n", Total);
	// Output:  Purchases total is 115.74

	return (0);
}

/*
A two-dimensional array is an array of arrays and can be thought of as a table. You can also think of a two-dimensional array as a grid for representing a chess board, city blocks, and much more.

int a[2][3] = {{3, 2, 6}, {4, 5, 20}};
int sum = 0;

for (int k = 0; k < 2; k++)
{
	for (int j = 0; j < 3; j++)
	{
		sum += a[k][j];
	}
}
printf("Sum: %d", sum);
*/
