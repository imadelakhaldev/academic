// A union allows to store different data types in the same memory location. It is like a structure because it has members. However, a union variable uses the same memory location for all its member's and only one member at a time can occupy the memory location.
#include <stdio.h>
#include <string.h>

union	val { // Delcaring union named val.
	int int_num;
	float fl_num;
	char str[20]; 
};

int	main() {  
	union val test; // Initialitzing union val variable named test.

	test.int_num = 123; // Applying value to int_num inside test.
	test.fl_num = 98.76;
	strcpy(test.str, "hello");

	printf("%d\n", test.int_num);
	printf("%f\n", test.fl_num);
	printf("%s\n", test.str);

	return (0);
}
