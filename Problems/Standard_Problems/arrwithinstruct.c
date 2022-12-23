// C program to demonstrate the
// use of an array within a structure
#include <stdio.h>

// Declaration of the structure candidate
struct candidate {
	int roll_no;
	char grade;
	// Array within the structure
	float marks[4];
};

// Function to displays the content of
// the structure variables
void display(struct candidate A)
{

	printf("Roll number : %d\n", A.roll_no);
	printf("Grade : %c\n", A.grade);
	printf("Marks secured:\n");
	int i;
	// array within the structure
	for (i = 0; i < 4; i++) {
		printf("Subject %d : %.2f\n",
			i + 1, A.marks[i]);
	}
}

// Driver Code
int main()
{
	// Initialize a structure
	struct candidate A
		= { 1, 'A', { 98.5, 77, 89, 78.5 } };

	// Function to display structure
	display(A);
	return 0;
}
