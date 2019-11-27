// A structure is a user-defined data type that groups related variables of different data types.
// The typedef keyword creates a type definition that simplifies code and makes a program easier to read.
#include <stdio.h>
#include <string.h>

struct	Student // Initializing struct data type named Student.
{
	int Age; // Declaring expected variables.
	int Grade;
	char Name[40];
};

typedef struct
{
	int ID;
	char Title[40];
	float Houres;
} Course;

int	main()
{
	struct Student S1 = {19, 9, "John"}; // Declaring variable S1 inside Student struct.
	struct Student S2;
	Course C1 = {1, "Algorithms", 24.5}; // Declaring variable C1 inside struct that is remaned (Typedef) to Course.

	S2.Age = 22; // Declaring variables of S2 variable.
	S2.Grade = 10;
	strcpy(S2.Name, "Batman");

	printf("%s\t%d\t%d\n", S2.Name, S2.Age, S2.Grade);

	return (0);
}
