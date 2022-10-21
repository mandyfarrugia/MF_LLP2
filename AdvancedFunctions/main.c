#include <stdio.h>

/* Pass by reference function: Accepts a pointer to a memory address of an argument.
 * The pointer is dereferenced and the value to which the pointer points is added by 1. */
void add(int* numPtr) {
	*numPtr += 1; //Access the value to which the pointer points and add 1 to it.
}

int main(void) {
	int num = 89;
	add(&num); //We passed the memory address of num assigned to numPtr which is then dereferenced and incremented.
	printf("The value is now %d", num);

	getch();
	return 0;
}