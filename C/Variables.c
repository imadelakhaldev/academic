#include <stdio.h>
// "#define PI 3.14" = Another way to declare constant variable using Preprocessors."

int	main()
{
	int A, B; // Declaring A & B as integer variables.
	float Salary = 56.23; // Declaring variable "Salary" as float, and assigning value to it.
	char Letter = 'Z'; // Declaring variable "Letter" as character, and assigning value to it.
	const double PI = 3.14; // Declaring constant variable named "PI" as double, and assagning value to it.

	A = 8; // Assigning value 8 to pre-declared variable A.
	B = 34;
	int C = A + B; // Declaring variable C, and assigning the sum of variables A & B to it.

	printf("%d\n", C); // Using Integer data format (%d) for printing.
	printf("%f \n", Salary); // Using Float data format (%f) for printing.
	printf("%c \n", Letter); // Using Character data format (%c) for printing.
	printf("%lf\n", PI); // Using Double data format (%lf) for printing.

	return (0);
}
