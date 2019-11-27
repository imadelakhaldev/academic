// A pointer is a variable that contains the address of another variable. In other words, it "points" to the location assigned to a variable and can indirectly access the variable.
#include <stdio.h>

int	main()
{
	int Num = 5;
	int *Ptr0 = &Num; // Assigning Num memory address to Ptr0 pointer.
	*Ptr0 = 10; // Assigning value 10 to Ptr0, so it's changed Num too.

	printf("The address of Num is %x\n", &Num); // Using %x formating to print hex values.
	printf("Ptr contains address %x\n", Ptr0); // Using Ptr0 without * to access address of pointed variable.
	printf("The value of Num is %d\n", Num);
	printf("Ptr is pointing to the value %d\n", *Ptr0); // Using * to access numeric value of Ptr0.

	int Arr[5] = {22, 33, 44, 55, 66};
	int *Ptr1;
	Ptr1 = Arr; // Assigning value all addresses of values in Arr array.

	for (int I = 0; I < 5; I++) 
		printf("%d. ", Ptr1[I]); // Accessing each memory location in Ptr1.

	return (0);
}

/*
You can access Pointers in memory using Address Arithmetic:
int a[5] = {22, 33, 44, 55, 66};
int *ptr;

ptr = a;  Point to the first array element.
printf("%d  %x\n", *ptr, ptr);  22
ptr++;
printf("%d  %x\n", *ptr, ptr);  33
ptr += 3;
printf("%d  %x\n", *ptr, ptr);  66
ptr--;
printf("%d  %x\n", *ptr, ptr);  55
ptr -= 2;
printf("%d  %x\n", *ptr, ptr);  33

22 febd4760
33 febd4764
66 febd4770
55 febd476c
33 febd4764
*/
