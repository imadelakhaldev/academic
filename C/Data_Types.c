#include <stdio.h>

int	main()
{	// "\n" used to break line. "sizeof" function used to get used size of specified data.
	printf("Size of Int: %lu\n", sizeof(int)); // Integers (ex: 10).
	printf("Size of Float: %lu\n", sizeof(float)); // Floats (ex: 3.14).
	printf("Size of Double: %lu\n", sizeof(double)); // Doubles, similar to float but bigger range.
	printf("Size of Char: %lu\n", sizeof(char)); // Characters (ex: x).

	return (0);
}
/*
void			0	NULL					

unsigned int		4	0 to 4,294,967,295			%u
int			4	-2,147,483,648 to 2,147,483,647		%d or %i
long int		4	-2,147,483,648 to 2,147,483,647		%ld or %li
unsigned long int	4	0 to 4,294,967,295			%lu

char			1	0 to 255				%c

float			4	1.2E-38 to 3.4E+38			%f
double			8	2.3E-308 to 1.7E+308			%lf
*/
