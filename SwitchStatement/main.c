#include <stdio.h>

int main(void) {
	char grade = 'C'; //Store 'C' in a char variable named grade.

	//Use the switch statement to grade the value in the grade variable with a set of cases.
	switch (grade) {
		case 'A':
			printf("Well done, you are a natural in C! :)");
			break;
		case 'B':
			printf("Good job!");
			break;
		/* In this case, the value in the grade variable matches case 'C', hence the code within it runs. */
		case 'C':
			printf("Not bad!");
			break;
		case 'D':
			printf("You need more practice!");
			break;
		case 'U':
			printf("You have failed.");
			break;
		default:
			printf("Incorrect grade!");
			break;
	}

	getch();
	return 0;
}