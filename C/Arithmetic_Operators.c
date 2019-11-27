#include <stdio.h>

int	main()
{
	int A = 5, B = 6, Area;
	Area = A * B; // Using "*" operator for multiplication.
	printf("Area = %d\n", Area);

	float C = 3.14, D = 1.3, Division;
	int  Remainder;
	Division = C / D; // Using "/" for division.
	Remainder = A % B; // Using "%" for division remainder.
	printf("Division = %0.2f, Remainder = %d\n", Division, Remainder);

	return (0);
}
