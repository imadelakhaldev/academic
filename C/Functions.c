#include <stdio.h>

int	Sum(int X, int Y); // Declaration of Sum function with two parameters X & Y.
int	Factorial(int Num); // Declaration of Factorial function with Num parameter.

int	main()
{
	int A, B, X, Result;

	A = 3;
	B = 12;
	X = 5;
	Result = Sum(A, B); // Applying result of function to Result varaible while passing A & B parameters.
	printf("%d + %d = %d\n", A, B, Result);
	printf("The factorial of %d is %d\n", X, Factorial(X));

	return (0);
}

int	Sum(int X, int Y) // Definition of Sum function.
{
	X += Y;
	return (X); // Return value of X as a result.
}
int	Factorial(int Num)
{
	if (Num == 1)  // Base case.
		return (1);
	else
		return (Num * Factorial(Num - 1)); // Recursive function!
}
/*
Variable scope refers to the visibility of variables within a program.
Variables declared in a function are local to that block of code and cannot be referred to outside the function.
Variables declared outside all functions are global to the entire program.

Static variables have a local scope but are not destroyed when a function is exited. Therefore, a static variable retains its value for the life of the program and can be accessed every time the function is re-entered.
void say_hello();
int	main()
{
	int i;

	for (i = 0; i < 5; i++)
	{
		say_hello();
	}
	return 0;
}
void	say_hello()
{
	static int num_calls = 1;
	printf("Hello number %d\n", num_calls);
	num_calls++;
}
Hello number 1
Hello number 2
Hello number 3
Hello number 4
Hello number 5
*/
