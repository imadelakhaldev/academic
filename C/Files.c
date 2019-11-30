// An external file can be opened, read from, and written to in a C program. For these operations, C includes the FILE type for defining a file stream. The file stream keeps track of where reading and writing last occurred.
#include <stdio.h>

int	main()
{
	// Opening & closing files.
	FILE *file_ptr0; // Declaring variable of FILE data type.

	file_ptr0 = fopen("file0.txt", "w"); // Opening file for writing and saving in pointer varibale.
	if (file_ptr0 == NULL) // Returns NULL if error occurred, 0 if successful.
	{
		printf("Error opening file0 for writing.\n");
		return (-1); // Returning -1 for error handling.
	}
	else
		printf("Successfully opened file0 for writing.\n");
	fclose(file_ptr0); // Closing file for freeing memory.

	// Reading from file.
	FILE *file_ptr1;
	int Stock, C;
	char Buffer[200], Item[10];
	float Price;

	file_ptr1 = fopen("file1.txt", "r"); // Opening file for reading and saving in pointer variable.
	// file1.txt: Inventory\n100 Widget 0.29\nEnd of List.

	fgets(Buffer, 20, file_ptr1); // Save first 20 character from file_ptr1 to Buffer.
	printf("%s\n", Buffer);

	fscanf(file_ptr1, "%d %s %f\n", &Stock, Item, &Price); // Saving input from file_ptr1 to specific variables in specific formatings.
	printf("%d %s %0.2f\n", Stock, Item, Price);

	while ((C = getc(file_ptr1)) != EOF) // Checking if it's end of line, else continue printing the rest character by character.
		printf("%c", C);
	fclose(file_ptr1); // Closing file.

	// Writing to file.
	/*
	fputc(char, fp) Writes character char to the file pointed to by fp.
	fputs(str, fp) Writes string str to the file pointed to by fp.
	fprintf(fp, str, vars) Prints string str to the file pointed to by fp. str can optionally include format specifiers and a list of variables vars.
	*/
	file_ptr0 = fopen("file0.txt", "w");
	fprintf(file_ptr0, "Hello World!\n");
	fprintf(file_ptr0, "%d %s %f\n", 100, "Hello", 0.29);
	fputs("End of file", file_ptr0); 

	return (0);
}
/*
fopen(filename, mode) Returns a FILE pointer to file filename which is opened using mode. If a file cannot be opened, NULL is returned.
Mode options are:
- r open for reading (file must exist)
- w open for writing (file need not exist)
- a open for append (file need not exist)
- r+ open for reading and writing from beginning
- w+ open for reading and writing, overwriting file
- a+ open for reading and writing, appending to file

fclose(fp) Closes file opened with FILE fp, returning 0 if close was successful. EOF (end of file) is returned if there is an error in closing.
*/
