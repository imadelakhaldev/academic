/*
The C preprocessor uses the # directives to make substitutions in program source code before compilation.
For example, the line #include <stdio.h> is replaced by the contents of the stdio.h header file before a program is compiled.

#include Including header files.
#define, #undef Defining and undefining macros.
#ifdef, #ifndef, #if, #else, #elif, #endif Conditional compilation.
#pragma Implementation and compiler specific.
#error, #warning Output an error or warning message An error halts compilation.
*/

// Headers.
/*
Some useful C libraries are:
stdio input/output functions, including printf and file operations.
stdlib memory management and other utilities.
string functions for handling strings.
errno errno global variable and error code macros.
math common mathematical functions.
time time/date utilities.
A user-defined header file is also given the .h extension, but is referred to with quotation marks, as in "myutil.h". When quotation marks are used, the file is searched for in the source code directory.
*/

// Define.
/*
The #define directive is used to create object-like macros for constants based on values or expressions.
#define can also be used to create function-like macros with arguments that will be replaced by the preprocessor.
*/

// #ifndef, #endif, #undef.
/*
The #ifdef, #ifndef, and #undef directives operate on macros created with #define.
For example, there will be compilation problems if the same macro is defined twice, so you can check for this with an #ifdef directive. Or if you may want to redefine a macro, you first use #undef.
*/
#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI * (r) * (r))

#ifndef LEVEL
	#define LEVEL 6
#endif

int	main()
{
	float Radius = 2;
	printf("%3.2f\n", PI);
	printf("Area = %0.2f\n", AREA(Radius));
	printf("Area + 1 = %0.2f\n", AREA(Radius + 1));

	#if LEVEL < 6 // Conditional compilation of segments of code is controlled by a set of directives: #if, #else, #elif, and #endif.
		printf("LEVEL IS LESS THAN 6\n");
	#elif LEVEL == 6
		printf("LEVEL EQUAL 6\n");
	#else
		printf("LEVEL IS MORE THAN 6\n");
	#endif

	return (0);
}
// Predefined Macro Definitions.
/*
In addition to defining your own macros, there are several standard predefined macros that are always available in a C program without requiring the #define directive:
__DATE__ The current date as a string in the format Mm dd yyyy
__TIME__ The current time as a string in the format hh:mm:ss
__FILE__ The current filename as a string
__LINE__ The current line number as an int value
*/
