#include <stdio.h>
#include <string.h>

int	main()
{
	// String Variables.
	char Str0[6] = "Hello"; // Declaring an array of characters of size 6 (5 characters + place for \0 end of string).
	char Str1[] = "World"; // Delcaring an array of characters of undetermened size.

	// String Input.
	char First_Name[25];
	int Age;
	printf("Enter your first name and age: ");
	scanf("%s %d", First_Name, &Age); // Using scanf function to read input according to format specifiers. There is no need for & to access the variable address because an array name acts as a pointer. scanf() stops reading input when it reaches a space. To read a string with spaces, use the gets() function. It reads input until a terminating newline is reached (the Enter key is pressed).
	char Full_Name[50];
	printf("Enter your full name: ");
	gets(Full_Name); // Using gets function to read full string input. A safer alternative to gets() is fgets(), which reads up to a specified number of characters. This approach helps prevent a buffer overflow, which happens when the string array isn't big enough for the typed text.

	fgets(full_name, 50, stdin); // The fgets() arguments are the string name, the number of characters to read, and a pointer to where you want to read the string from. stdin means to read from the standard input, which is the keyboard.

	// String Output.
	char City[40];
	printf("Enter your city: ");
	fgets(City, 40, stdin);
	
	fputs(City, stdout); // fputs function requires the name of the string and a pointer to where you want to print the string. To print to the screen, use stdout which refers to the standard output.
	puts(City); // puts function adds a newline to output.
}
/*
To safely and conveniently operate with strings, you can use the Standard Library string functions shown below. Don't forget to include <string.h>.
strlen() - get length of a string
strcat() - merge two strings
strcpy() - copy one string to another
strlwr() - convert string to lower case
strupr() - conver string to upper case
strrev() - reverse string
strcmp() - compare two strings

Additional string.h functions include:
strncat(str1, str2, n) Appends (concatenates) first n characters of str2 to the end of str1 and returns a pointer to str1.
strncpy(str1, str2, n) Copies the first n characters of str2 to str1.
strcmp(str1, str2) Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
strncmp(str1, str2, n) Returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
strchr(str1, c) Returns a pointer to the first occurrence of char c in str1, or NULL if character not found.
strrchr(str1, c) Searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if character not found.
strstr(str1, str2) Returns a pointer to the first occurrence of str2 in str1, or NULL if str2 not found.
*/
