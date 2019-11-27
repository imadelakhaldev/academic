/*
When a numeric expression contains operands of different data types, they are automatically converted as necessary in a process called type conversion.
For example, in an operation involving both floats and ints, the compiler will convert the int values to float values.
When you want to force the result of an expression to a different type you can perform explicit type conversion by type casting.
*/

#include <stdio.h>

int	main()
{
	float Price = 6.50;
	int Increase = 2;
	float New_Price;

	New_Price = Price + Increase; // Automatic type conversion to "Increase" variable to float.
	printf("New price is: %4.2f", New_Price);

	float Average;
	int Total = 23;
	int Count = 4;

	Average = (float) Total / Count; // Maunual type casting to both variables in expression to float.
	printf("Average is: %4.2f", Average);

	return (0);
}
