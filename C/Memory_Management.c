// Understanding memory is an important aspect of C programming. When you declare a variable using a basic data type, C automatically allocates space for the variable in an area of memory called the stack.
/*
The stdlib.h library includes memory management functions.
The statement #include <stdlib.h> at the top of your program gives you access to the following:

malloc(bytes) Returns a pointer to a contiguous block of memory that is of size bytes.

calloc(num_items, item_size) Returns a pointer to a contiguous block of memory that has num_items items, each of size item_size bytes. Typically used for arrays, structures, and other derived data types. The allocated memory is initialized to 0.

realloc(ptr, bytes) Resizes the memory pointed to by ptr to size bytes. The newly allocated memory is not initialized.

free(ptr) Releases the block of memory pointed to by ptr.
*/
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int *ptr;
	ptr = malloc(10*sizeof(*ptr));  // Allocating a block of 10 ints in memory, which means 40 bytes.

	*(ptr+2) = 50;  // Assign 50 to third int, equivalent of ptr[2] = 50;.
	printf("3rd elem equals to %d", *(ptr + 2));

	free(ptr); // The free() function is a memory management function that is called to release memory. By freeing memory, you make more available for use later in your program.

	return (0);
}
